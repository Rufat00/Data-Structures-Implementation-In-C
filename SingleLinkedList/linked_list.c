#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *add_node(struct node **head, int value)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next = *head;

    *head = new_node;

    return new_node;
};

void loop(struct node *head, void (*f)(struct node node))
{
    struct node *current = head;

    while (1)
    {
        f(*current);
        if (current->next == NULL)
        {
            break;
        };
        current = current->next;
    }
}