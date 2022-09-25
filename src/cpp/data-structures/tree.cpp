// Tree: a data structure designed to hold items in a hierarchical pattern
// Every node has one and only one parent node except root node
// Every node has zero or more children. Every node looks like a sub-tree.
// Nodes point to the parent node.

// Binary tree: nodes can have maximum of two children (left and right). If a
// node in binary tree has two nodes, it's called a full node. The left and
// right order might matter, e.g., we might store the value lees than current
// node in left child and value greater than (or equal to) the node in right
// child. Such order binary trees are called Binary Search Tree.

// Searching in a binary search tree has O(log N) complexity (log base 2 for
// binary trees). Insertion and deletion also takes O(log N).
// We can use such trees for storage of items which can be compared using less-
// than (<) operator. Very efficient for in-order storage.

// Size of tree: size of tree refers to the total number of nodes
// Height of tree: number of links from the root to the farthest child (height
// of root only tree is 0, height of NULL is -1).
// Depth of node: distance (number of links) from the node to the root. Depth of
// root node is 0.

// Parent-multi-child: storage consists of a data section, and pointers to its
// children. Ideal for cases where we have known fixed number of children.
// Parent-child-sibling: parent holds the pointer of first child, first child
// points to the next sibling, and so on. It could be a linked list, whose head
// pointer is stored in the parent.

// Leaf node: has no child.

// Use cases: storing items in binary search tree for later searching, file and
// directory

#include <iostream>
using namespace std;

template <class T>
class BSTNode
{
    T data;
    BSTNode<T> *parent;
    BSTNode<T> *left;
    BSTNode<T> *right;

public:
    BSTNode(T new_data, BSTNode<T> *new_parent = nullptr,
            BSTNode<T> *new_left = nullptr,
            BSTNode<T> *new_right = nullptr) : data(new_data), parent(new_parent), left(new_left), right(new_right) {}
    friend class BST<T>;
    int getSize() const;
};

template <class T>
int BSTNode<T>::getSize() const
{
    int count = 1;
    if (left != nullptr)
    {
        count += left->getSize();
    }
    if (right != nullptr)
    {
        count += right->getSize();
    }

    return count;
}

// Tree traversal
//       20
//      /  \
//     5    30
//    / \   /
//   3  10 25

// Pre-order: 20, 5, 3, 10, 30, 25
// In-order: 3, 5, 10, 20, 25, 30
// Post-order: 3, 10, 5, 25, 30, 20
// Level-order: 20, 5, 30, 3, 10, 25

// Process the left nodes first, recursively, then process this node, then
// process the right nodes

template <class T>
class BST
{
public:
    void printInOrder(BSTNode<T> *node);
    void printPreOrder(BSTNode<T> *node);
    void printPostOrder(BSTNode<T> *node);
    void printLevelOrder();
    void inset(T item);
    void remove(BSTNode<T> *&temp);
};

template <class T>
void BST<T>::printInOrder(BSTNode<T> *node)
{
    if (node != nullptr)
    {
        printInOrder(node->left);
        cout << node->data << ",";
        printInOrder(node->right);
    }
}

// Processes this node, then left nodes recursively, then the right nodes
// recursively
template <class T>
void BST<T>::printPreOrder(BSTNode<T> *node)
{
    if (node != nullptr)
    {
        cout << node->data << ", ";
        printPreOrder(node->left);
        printPreOrder(node->right);
    }
}

// processes left nodes recursively, then right nodes recursively, then this
// node
template <class T>
void BST<T>::printPostOrder(BSTNode<T> *node)
{
    if (node != nullptr)
    {
        printPostOrder(node->left);
        printPostOrder(node->right);
        cout << node->data << ", ";
    }
}

// Level order: process the nodes based on depth, the nodes closest to the
// root first, then successively lower order. Breadth first traversal.
template <class T>
void BST<T>::printLevelOrder()
{
    queue<BSTNode<T> *> q;
    q.push(root);
    while (!q.empty())
    {
        BSTNode<T> *temp = q.front();
        q.pop();
        cout << temp->data << ",";
        if (temp->left != nullptr)
        {
            q.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            q.push(temp->right);
        }
    }
}

// Insertion into tree
template <class T>
void BST<T>::inset(T item)
{
    if (root == nullptr) // tree is empty
    {
        root = new BSTNode<T>(item);
        return;
    }

    BSTNode<T> *temp = root;
    BSTNode<T> *prev = root;

    while (temp != nullptr)
    {
        prev = temp;
        if (item < temp->data) // go left
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    if (item < prev->data)
    {
        prev->left = new BSTNode<T>(item, prev);
    }
    else
    {
        prev->right = new BSTNode<T>(item, prev);
    }
}

// Removing node
template <class T>
void BST<T>::remove(BSTNode<T> *&temp)
{
    // If a node has no children (leaf node), it is easy to remove
    if (temp->left == nullptr && temp->right == nullptr) // no child
    {
        // need to determine if this the root, or right/left of parent
        if (parent == nullptr) // last node on the tree
        {
            root = nullptr;
        }
        else if (parent->left == temp)
        {
            parent->left = nullptr;
        }
        else
        {
            parent->right = nullptr;
        }

        delete temp;
    }
    // If a node has only one child, also easy to remove. Promote the child to
    // its parent (current) node.
    else if (temp - left == nullptr) // we have only right child
    {
        BSTNode<T> *to_delete = temp->right;
        temp->data = to_delete->data;
        temp->left = to_delete->left;
        if (temp->left != nullptr)
        {
            temp->left->parent = temp;
        }
        temp->right = to_delete->right;
        if (temp->right != nullptr)
        {
            temp->right->parent = temp;
        }
        delete to_delete;
    }
    else if (temp - right == nullptr) // we have only left child
    {
        BSTNode<T> *to_delete = temp->left;
        temp->data = to_delete->data;
        temp->left = to_delete->left;
        if (temp->left != nullptr)
        {
            temp->left->parent = temp;
        }
        temp->right = to_delete->right;
        if (temp->right != nullptr)
        {
            temp->right->parent = temp;
        }
        delete to_delete;
    }
    else // we have both children
    {
        BSTNode<T> *min_of_right = temp->right;
        while (min_of_right->right != nullptr)
        {
            min_of_right = min_of_right->left;
        }
        temp->data = min_of_right->data;
        remove(min_of_right); // recursion
    }
}
