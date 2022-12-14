// class is a collection of variables (usually of different types), combined
// with related functions (methods). Class members can be of any data type
// including other classes
#include <iostream>
#include <cmath> // M_PI, pow
using namespace std;

class circle
{
    // by default class members are private
    // there can be multiple public, private blocks
public:
    double center_x, center_y, radius;
    double area(void);     // the function is defined outside the class block
    double perimeter(void) // another member function defined inside class block
    {
        return 2 * M_PI * radius;
    }

    string get_fill_color(void);
    void set_fill_color(string);
    circle translate_circle(double, double);

    // only the members (variable and functions) of the class has access to the
    // private members
private:
    string fill_color_; // we will use google style guide: `_` suffix for
                        // private members
};

// we can define the function member outside the class definition
// outside the class body, the function must use the scope resolution operator
// `::` in the format class_name::function_syntax
double circle::area(void)
{
    return M_PI * pow(radius, 2);
}

string circle::get_fill_color()
{
    return fill_color_;
}

void circle::set_fill_color(const string fill)
{
    fill_color_ = fill;
}

double perimeter(circle c)
{
    return 2.0 * M_PI * c.radius;
}

// we can return an object
circle circle::translate_circle(double x, double y)
{
    circle new_circle;
    new_circle.center_x = center_x + x;
    new_circle.center_y = center_y + y;
    new_circle.radius = radius;
    return new_circle;
}

int main()
{
    circle c;
    // we can define an array of circle too
    // circle c[10];
    // it is also possible to dynamically allocate objects (instances of class)
    // circle *c2 = new circle;
    // circle *array_of_circles = new circle[10];
    // deallocate:
    // delete c2;
    // delete[] array_of_circles;

    c.center_x = 0.0;
    c.center_y = 0.0;
    c.radius = 1.0;
    // a class that has only public members, can be initialized with comma
    // separated values:
    // circle c = {0.0, 0.0, 1.0};

    // let's copy the circle to another circle object
    // this copies the data to a new memory location
    circle c_copy = c;

    c.center_x += 2.0;
    c.center_y += 1.0;
    c.radius += 2.0;

    cout << "Circle c\n";
    cout << "X = " << c.center_x << endl;
    cout << "Y = " << c.center_y << endl;
    cout << "Radius = " << c.radius << endl;

    cout << "\nc_copy\n";
    cout << "X = " << c_copy.center_x << endl;
    cout << "Y = " << c_copy.center_y << endl;
    cout << "Radius = " << c_copy.radius << endl;

    cout << "\nPerimeter of circle c = " << perimeter(c) << endl;

    cout << "\nArea of circle c = " << c.area() << endl;
    cout << "Perimeter of circle c = " << c.perimeter() << endl;

    c.set_fill_color("green");
    cout << "Fill color: " << c.get_fill_color() << endl;

    circle c_tr = c.translate_circle(1.0, 1.0);
    cout << "\nCircle c after translation\n";
    cout << "X = " << c_tr.center_x << endl;
    cout << "Y = " << c_tr.center_y << endl;
    cout << "Radius = " << c_tr.radius << endl;

    return 0;
}
