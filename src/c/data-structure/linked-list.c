#include <stdio.h>  // printf
#include <stdlib.h> // malloc
#include <string.h> // strcpy
#include <assert.h> // assert

typedef struct todo_list
{
    char item_name[100];
    int number_of_item;
    int is_important; // no boolean type in C, use 0/1 for false/true
    struct todo_list *next;
} todo_list;

todo_list *create_new_item(char item_name[], int number_of_item, int is_important)
{
    todo_list *list;
    list = malloc(sizeof(todo_list));
    strcpy(list->item_name, item_name);
    list->number_of_item = number_of_item;
    list->is_important = is_important;
    list->next = NULL;
    return list;
}

void print_item(todo_list *list)
{
    if (list == NULL)
    {
        return;
    }
    else
    {
        printf("Item name: %s\n", list->item_name);
        printf("Number of items: %d\n", list->number_of_item);

        if (list->is_important == 0)
        {
            printf("Is important: false\n");
        }
        else
        {
            printf("Is important: true\n");
        }
    }
}

void print_list(todo_list *list)
{
    if (list == NULL)
    {
        return;
    }
    else
    {
        print_item(list);

        if (list->next == NULL)
        {
            return;
        }
        else
        {
            printf("\n");
            print_list(list->next);
        }
    }
}

void insert_head(todo_list **list, todo_list *todo_item)
{
    todo_item->next = *list;
    *list = todo_item;
}

todo_list *search_list(todo_list *list, char item_name[])
// returns pointer to the todo item
{
    if (list == NULL)
    {
        return NULL;
    }

    if (strcmp(list->item_name, item_name) == 0)
    {
        return list;
    }
    else
    {
        return search_list(list->next, item_name);
        // if program arrives here it must return
    }
}

todo_list *item_ahead(todo_list *list, char item_name[])
{
    if ((list == NULL) || (list->next == NULL))
    {
        return (NULL);
    }

    if (strcmp(list->item_name, item_name) == 0)
    {
        return (list->next);
    }
    else
    {
        return (item_ahead(list->next, item_name));
    }
}

void delete_head(todo_list **list)
{
    if ((*list) != NULL)
    {
        todo_list *head;
        head = (*list)->next;
        free(*list);
        *list = head;
    }
}

void delete_list(todo_list **list)
{
    while ((*list) != NULL)
    {
        delete_head(list);
    }
}

int main()
{
    todo_list *my_list = create_new_item("bread", 2, 0);
    todo_list *milk = create_new_item("milk", 3, 1);
    insert_head(&my_list, milk);

    print_list(my_list);

    // search
    char item[] = "bread";
    todo_list *my_item = search_list(my_list, item);

    if (my_item == NULL)
    {
        printf("\n%s is not included in my list.\n", item);
    }
    else
    {
        printf("\n%s is included in my list.\n", item);
    }

    // item ahead
    todo_list *next_item;
    next_item = item_ahead(my_list, "milk");
    printf("next time: %s\n", next_item->item_name);

    printf("\n+++ Delete head +++\n");
    delete_head(&my_list);
    print_list(my_list);

    printf("\n+++ Insert milk again +++\n");
    milk = create_new_item("milk", 5, 0);
    insert_head(&my_list, milk);
    print_list(my_list);

    printf("\n+++ Delete all +++\n");
    delete_list(&my_list);
    print_list(my_list);

    return 0;
}
