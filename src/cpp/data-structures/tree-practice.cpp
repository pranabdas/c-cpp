// write a code that build a little 1-2-3 binary search tree
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *new_node(int data)
{
    struct node *node = new (struct node);
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

        return node;
    }
}

void print_tree(struct node *node)
{
    if (node == nullptr)
    {
        return;
    }
    else if (node->left == nullptr && node->right == nullptr)
    {
        cout << node->data;
        return;
    }
    else
    {
        cout << node->data;

        if (node->left != nullptr && node->right != nullptr)
        {
            cout << "[";
            print_tree(node->left);
            cout << ",";
            print_tree(node->right);
            cout << "]";
        }
        else if (node->right == nullptr)
        {
            cout << "[";
            print_tree(node->left);
            cout << "]";
        }
        else
        {
            cout << "[";
            print_tree(node->right);
            cout << "]";
        }
    }
}

int size(struct node *node)
{
    if (node == nullptr)
    {
        return 0;
    }
    else
    {
        return (size(node->left) + size(node->right) + 1);
    }
}

int max_depth(struct node *node)
{
    if (node == nullptr)
    {
        return 0;
    }
    else
    {
        int left_depth = max_depth(node->left);
        int right_depth = max_depth(node->right);

        if (left_depth > right_depth)
        {
            return (left_depth + 1);
        }
        else
        {
            return (right_depth + 1);
        }
    }
}

int main()
{
    struct node *root = NULL;
    root = new_node(2);
    root = insert(root, 1);
    root = insert(root, 3);

    print_tree(root);
    cout << endl;
    cout << "size = " << size(root) << endl;
    cout << "max_depth = " << max_depth(root) << endl;

    struct node *test;
    test = new_node(5);
    test = insert(test, 6);
    test = insert(test, 3);
    test = insert(test, 1);
    test = insert(test, 2);
    test = insert(test, 7);
    test = insert(test, 9);
    test = insert(test, 5);
    test = insert(test, 0);
    print_tree(test);

    cout << endl;
    cout << "size = " << size(test) << endl;
    cout << "max_depth = " << max_depth(test) << endl;

    return 0;
}
