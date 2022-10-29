#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int value;
    struct node *previous;
    struct node *next;
};

// Adds new node to the beginning of a List
struct node *add_node(struct node **head, int value)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    if (*head)
    {
        (*head)->previous = new_node;
    }
    new_node->next = *head;
    new_node->previous = NULL;
    *head = new_node;

    return new_node;
};

// Adds new node to the end of a List
struct node *push_node(struct node **tail, int value)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    if (*tail)
    {
        (*tail)->next = new_node;
    }
    new_node->previous = *tail;
    new_node->next = NULL;
    *tail = new_node;

    return new_node;
};

void loop(struct node *point, void (*f)(struct node node), bool reverse)
{
    struct node *current = point;

    while (1)
    {
        f(*current);
        if (reverse == true)
        {
            if (current->previous == NULL)
            {
                break;
            }
            current = current->previous;
        }
        else
        {
            if (current->next == NULL)
            {
                break;
            }
            current = current->next;
        }
    }
}