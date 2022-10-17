#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> int_queue;

    // push items to the back
    int_queue.push(2);
    int_queue.push(5);
    int_queue.push(3);

    // size
    cout << "Size of queue: " << int_queue.size() << endl;

    // print items
    while (!int_queue.empty())
    {
        cout << int_queue.front();
        // last element of queue: queue.back()

        if (int_queue.size() > 1)
        {
            cout << ", ";
        }
        else
        {
            cout << endl;
        }

        // pop element from the queue (front)
        int_queue.pop();
    }

    return 0;
}
