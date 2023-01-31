#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct tree
{
    int key;
    struct tree *left, *right;
} tree;

tree *create_tree(int key)
{
    tree *node = (tree *)malloc(sizeof(tree));
    assert(node);
    node->key = key;
    node->left = NULL;
    node->right = NULL;

    return node;
}

tree *insert_node(tree *node, int key)
{
    if (node == NULL)
    {
        return (create_tree(key));
    }

    if (key < node->key)
    {
        node->left = insert_node(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert_node(node->right, key);
    }

    return node;
}

void print_tree(tree *node)
{
    if (node == NULL)
    {
        return;
    }
    else if (node->left == NULL && node->right == NULL)
    {
        printf("%d", node->key);
        return;
    }
    else
    {
        printf("%d", node->key);

        if (node->left != NULL && node->right != NULL)
        {
            printf("[");
            print_tree(node->left);
            printf(", ");
            print_tree(node->right);
            printf("]");
        }
        else if (node->right == NULL /* && (node->left != NULL) */)
        {
            printf("[");
            print_tree(node->left);
            printf("]");
        }
        else /* if (node->left == NULL && (node->left != NULL)) */
        {
            printf("[");
            print_tree(node->right);
            printf("]");
        }
    }
}

// depth first search
tree *search(tree *node, int key)
{
    if (node == NULL || node->key == key)
    {
        return node;
    }

    if (key < node->key)
    {
        return search(node->left, key);
    }
    else
    {
        return search(node->right, key);
    }
}

// build queue data structure
typedef struct queue
{
    struct tree *item;  // content of queue, a tree pointer
    struct queue *next; // pointer to next queue item

} queue;

void enqueue(queue **q, tree *node)
{
    queue *p = *q;
    queue *r = (queue *)malloc(sizeof(queue));
    assert(r);
    r->item = node;
    r->next = NULL;

    if (p == NULL)
    {
        *q = r; // if the queue is empty, newly allocated item is the queue
    }
    else
    {
        while (p->next) // go to the end of queue and attach new item
        {
            p = p->next;
        }
        p->next = r;
    }
}

tree *dequeue(queue **q)
// removes first item from queue and returns the item
{
    queue *p = *q;

    if (p)
    {
        *q = p->next;
    }

    return p->item;
}

int queue_length(queue *q)
{
    int len = 0;

    while (q)
    {
        q = q->next;
        len++;
    }

    return len;
}

// breadth first traversal to print binary tree level by level
void print_tree_levels(tree *root)
{
    int number_of_nodes;
    if (root == NULL)
    {
        return;
    }

    queue *q = NULL;
    enqueue(&q, root);

    while (1)
    {
        number_of_nodes = queue_length(q);
        if (number_of_nodes == 0)
        {
            break;
        }

        while (number_of_nodes > 0)
        {
            tree *node = dequeue(&q);
            printf("%d", node->key);
            if (number_of_nodes > 1)
            {
                printf(", ");
            }

            if (node->left != NULL)
            {
                enqueue(&q, node->left);
            }

            if (node->right != NULL)
            {
                enqueue(&q, node->right);
            }

            number_of_nodes--;
        }
        printf("\n");
    }
}

int main()
{
    const int SIZE = 8;
    int node_keys[8] = {5, 3, 2, 4, 7, 6, 8, 1};
    int i;
    tree *root = NULL;

    root = insert_node(root, node_keys[0]);

    for (i = 1; i < SIZE; i++)
    {
        insert_node(root, node_keys[i]);
    }

    printf("Print tree by in-order (depth first) traversal order:\n");
    print_tree(root);
    printf("\n");

    tree *find = search(root, 7);
    printf("\nSearch: looking for '7' and got '%d'\n", find->key);

    printf("\nPrinting tree level by level (breadth first traversal):\n");
    print_tree_levels(root);

    return 0;
}
