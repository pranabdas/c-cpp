// compile: g++ -pthread --std=c++17 filename.cpp 
#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::generate;
using std::vector;
using std::thread;
using std::ref;

void thread_sum(vector<int> &, int, int, int &);

int main()
{
    vector<int> numbers(100'000);
    // cout << numbers.size() << endl;

    generate(begin(numbers), end(numbers), []()
             { return rand() % 10; });  

    int result_t1 = 0;
    int result_t2 = 0;

    thread t1(thread_sum, ref(numbers), 0, 49'999, ref(result_t1));
    thread t2(thread_sum, ref(numbers), 50'000, 99'999, ref(result_t2));

    // wait for the threads
    t1.join();
    t2.join();

    cout << "Result = " << result_t1 + result_t2 << endl;

    return 0;
}

void thread_sum(vector<int> &vec, int start, int end, int &result)
{
    for (int i = start; i <= end; i++)
    {
        result += vec[i];
    }
}
