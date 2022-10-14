// stack is another type of data structure where we can add/push item on the top
// of the collection. We can only access or remove only the top item. It follows
// last in first out (LIFO) or first in last out (FILO) convention.
// We can use linked list for stack, add item, access top, remove top all have
// constant time O(1) complexity. In contrary, if we used regular array, adding
// new item could be O(1) (if the array has extra room) or O(N) if the array
// need to expand.
// we should have following operations/methods on a stack:
// push, pop, top, clear, isEmpty, size
// notice clear would O(N) for linked list, while O(1) for regular array.
// we create a data element for the size, which can make size operation O(1) for
// a linked list.

// Uses: compilers uses stacks for ({[]}) pattern matching.

// we will use built-in STL list class (which is doubly linked list)
// we will also use push_front, pop_front, and other methods

#include <iostream>
#include <list>
using namespace std;

template <class T>
class Stack
{
    list<T> data;

public:
    void push(T new_item)
    {
        data.push_front(new_item);
    }

    T pop()
    {
        return data.pop_front();
    }

    T top()
    {
        return *data.begin();
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
