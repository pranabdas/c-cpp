#include <iostream>
using namespace std;

// a simple binary search tree might look like
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// lookup operation
// given a binary search tree and a target value, search the tree to find out
// if the tree contains the target. General recursive patter of the lookup()
// code: deal with the base case where the tree is empty, deal with the current
// node, then use recursion to deal with the subtrees.

bool lookup(struct node *node, int target)
{
    // base case: empty tree
    if (node == nullptr)
    {
        return false;
    }
    // see if the target matches current node
    else if (target == node->data)
    {
        return true;
    }
    // otherwise recurse down the correct subtree
    else
    {
        if (target < node->data)
        {
            return (lookup(node->left, target));
        }
        else
        {
            return (lookup(node->right, target));
        }
    }
}

// insert operation: given a binary search tree and a number, insert the number
// in the correct place in the tree.

// Let's assume we want to insert 3 to the following tree:
//     2
//    / \
//   1   5
//
// It should return:
//     2
//    / \
//   1   5
//      /
//     3

// shape of a binary tree depends on the order that the nodes are inserted. If
// the nodes are inserted in increasing order (1, 2, 3, 4), the tree nodes just
// grow to the right leading to a linked list structure, and that defeats the
// O(log N) performance.

// changing pointer: what do we do if a function needs to change the pointer
// that is passed to it? One solution is to use reference parameter (here
// pointer to pointers)
// Here we will use another technique, we will return the new value to the
// calling function, and the caller is responsible for using the new value.

// helper function that allocates a new node with the give data and NULL left
// and right pointers
struct node *new_node(int data)
{
    struct node *node = new(struct node);
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;

    return node;
}

struct node *insert(struct node *node, int data)
{
    // if the tree is empty, return a new and single node
    if (node == NULL)
    {
        return (new_node(data));
    }
    else
    {
        if (data < node->data)
        {
            node->left = insert(node->left, data);
        }
        else
        {
            node->right = insert(node->right, data);
        }

        return node; // unchanged node pointer
    }
}
