// Queues are last in last out (LILO) or first in first out (FIFO) data model
// here push operation requires O(1) complexity for linked lists while O(1) or
// O(N) for regular array. However, pop operation is always O(N) if implemented
// using regular array.

// Uses: storage buffers

#include <iostream>
#include <list>
using namespace std;

template <class T>
class Queue
{
    list<T> data;

public:
    void enqueue(T new_item)
    {
        data.push_back(new_item);
    }

    T dequeue()
    {
        return data.pop_front;
    }

    bool isEmpty() const
    {
        return (data.size() == 0);
    }

    int size() const
    {
        return data.size();
    }

    void clear()
    {
        data.clear();
    }
};
