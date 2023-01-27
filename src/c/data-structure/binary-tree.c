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
        else if (node->right == NULL)
        {
            printf("[");
            print_tree(node->left);
            printf("]");
        }
        else
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

int main()
{
    const int SIZE = 7;
    int node_keys[7] = {5, 3, 1, 4, 7, 6, 8};
    int i;
    tree *root = NULL;

    root = insert_node(root, node_keys[0]);

    for (i = 1; i < SIZE; i++)
    {
        insert_node(root, node_keys[i]);
    }

    print_tree(root);
    printf("\n");

    tree *find = search(root, 7);
    printf("Looking for 7 and got %d\n", find->key);

    return 0;
}
