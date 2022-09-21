// linked lists are dynamic collection
// adding new item has O(1) complexity, while searching items in the list has
// O(N) cost. In comparison, inserting item in a regular array is O(N) while
// array search is o(1)
// linked lists are used where the array size is not known compile time, and
// we do not need random access to the items in it.
// Use cases: list of navigational nodes (going from one point to another in a
// map), list of items in a shopping cart

#include <iostream>
#include <string>
using namespace std;

// this is the data structure we are going to store in our list
struct LinkedList
{
    string item_name;
    int number_of_item;
    LinkedList *next;
};

// inserting new element to the head i.e., the new element becomes head
void add_to_head(LinkedList *&head, string new_item_name, int new_number_of_item)
{
    LinkedList *new_ptr;
    new_ptr = new LinkedList;
    new_ptr->item_name = new_item_name;
    new_ptr->number_of_item = new_number_of_item;
    new_ptr->next = head;

    head = new_ptr;
}

void print_linked_list(LinkedList *head)
{
    LinkedList *ref_ptr = head;
    cout << "List items: \n";

    while (true)
    {
        cout << ref_ptr->item_name << " (" << ref_ptr->number_of_item << " pcs.)"
             << endl;
        ref_ptr = ref_ptr->next;

        if (!ref_ptr)
        {
            break;
        }
    }
}

int length_linked_list(LinkedList *head)
{
    int len = 0;
    LinkedList *ref_ptr = head;

    while (true)
    {
        len += 1;
        ref_ptr = ref_ptr->next;

        if (!ref_ptr)
        {
            break;
        }
    }

    return len;
}

void delete_head(LinkedList *&head)
// in order to delete and modify pointer we need pass by reference
{
    if (head)
    {
        LinkedList *tmp_ptr;
        tmp_ptr = head->next;
        delete head;
        head = tmp_ptr;
    }
}

int main()
{
    // let's define out head pointer first
    // head pointer points to the first element of the linked list
    // head pointer also used to refer to the linked list
    LinkedList *head;
    head = new LinkedList;
    // assign the first element of the linked list
    // two ways of accessing struct members via pointer dereferencing
    head->item_name = "bread"; // (*head).item_name = "bread";
    head->number_of_item = 3;
    // if our list has only one item, the next pointer points to NULL
    // in case the head pointer points to nullptr, the list is empty
    // head = nullptr; // refers to empty linked list
    head->next = nullptr;

    cout << "Length of list = " << length_linked_list(head) << endl;

    // let's add new item to the head
    add_to_head(head, "water bottle", 5);

    print_linked_list(head);

    // add another item and print
    add_to_head(head, "tissue roll", 2);
    print_linked_list(head);
    cout << "Length of list = " << length_linked_list(head) << endl;

    delete_head(head);
    print_linked_list(head);

    return 0;
}
