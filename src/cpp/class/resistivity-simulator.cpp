// let's build a simulator for resistivity measurement: the simulator can set
// a specified temperature for the sample, and send specified current to sample,
// and measure voltage across the sample. This gives the resistivity of the
// sample
#include <iostream>
#include <ctime>
using namespace std;

#define DUMMY_RESISTANCE 12.5
#define TEMP_STABILITY_THRESHOLD 0.01

class ResistivitySimulator
// simulator state is defined by following parameters:
// (1) system time, (2) sample temperature, (3) applied current, (4) measured
// voltage across the sample. We are able to get those parameters via getter
// methods. We also able to set some of the parameters
{
    // friends
    // If we pass whole object as argument, it is copied to function stack,
    // while passing argument by reference, it only modifies original object
    friend double measure_resistivity(const ResistivitySimulator &);
    friend bool is_temperature_stable(const ResistivitySimulator &);

public:
    // constructor:
    ResistivitySimulator(double temperature = 300.0, double current = 0.0);
    // copy constructor
    // the reference is const to prevent modification to object itself
    ResistivitySimulator(const ResistivitySimulator &);

    // data members
    double temperature = 300.0; // temperature in degree Kelvin, default is set
                                // to room temperature, this is set temperature
    double current = 0.0;

    // member functions
    double get_temperature(void) const; // const specifier only applicable for
                                        // member functions, they cannot modify
                                        // the data members. This could be an
                                        // external function which measures
                                        // current temperature, different from
                                        // set temperature
    void set_temperature(double temp);
    void set_current(double);
    double get_current(void) const;
    double get_voltage(void) const; // all accessor methods could be const
                                    // member functions as they do not need
                                    // modification of any data members.
                                    // Whenever possible, make the method const

    // private members
private:
    double voltage_ = 0.0; // will follow google style guide of underscore
                           // suffix for private members
                           // private members cannot be accessed by class.member
    time_t temp_set_at_;   // time when the previous temperature was set
    double prev_temp_;
    double curr_temp_;
};

ResistivitySimulator::ResistivitySimulator(double temperature_val,
                                           double current_val)
{
    temperature = temperature_val;
    curr_temp_ = temperature_val;
    current = current_val;
    voltage_ = DUMMY_RESISTANCE * current_val;
}

ResistivitySimulator::ResistivitySimulator(const ResistivitySimulator &simulator)
{
    temperature = simulator.temperature;
    current = simulator.current;
    voltage_ = simulator.get_voltage();
}

double ResistivitySimulator::get_temperature(void) const
{
    return curr_temp_;
}

void ResistivitySimulator::set_temperature(double temp)
// todo: implement transient effect similar to a PID temperature controller
{
    curr_temp_ = temperature; // this should return current based on PID
                              // simulator, not same as set temperature
    prev_temp_ = temperature;
    temp_set_at_ = time(0);
    temperature = temp;
}

void ResistivitySimulator::set_current(double applied_current)
{
    current = applied_current;
    voltage_ = DUMMY_RESISTANCE * applied_current;
}

double ResistivitySimulator::get_current() const
{
    return current;
}

double ResistivitySimulator::get_voltage() const
{
    return (current * DUMMY_RESISTANCE);
}

double measure_resistivity(const ResistivitySimulator &simulator)
{
    if (simulator.current != 0)
    {
        return (simulator.voltage_ / simulator.current);
    }
    else
    {
        cerr << "\n!!! Could not determine resistivity.\n"
                "Apply finite current before measuring resistivity\n";
        exit(1);
    }
}

bool is_temperature_stable(const ResistivitySimulator &simulator)
// todo: check temperature over few sec and determine transient stability
// we can measure temperature every second, and compare the average with set
// temperature
{
    if (abs(simulator.temperature - simulator.get_temperature()) < TEMP_STABILITY_THRESHOLD)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ResistivitySimulator simulator;
    // initialize using constructor
    // ResistivitySimulator simulator = ResistivitySimulator();
    // ResistivitySimulator simulator = ResistivitySimulator(300.0, 0.0, 0.0);
    double temp;
    temp = simulator.get_temperature();
    cout << "Temperature = " << temp << endl;

    simulator.current = 1.0;
    cout << "Current = " << simulator.current << endl;

    simulator.set_current(2.0);
    cout << "Current = " << simulator.get_current() << endl;

    cout << "Voltage = " << simulator.get_voltage() << endl;
    cout << "Resistivity = " << measure_resistivity(simulator) << endl;

    // if applied current is 0, the program exits
    // simulator.set_current(0.0);
    // cout << "Resistivity = " << measure_resistivity(simulator) << endl;

    return 0;
}
