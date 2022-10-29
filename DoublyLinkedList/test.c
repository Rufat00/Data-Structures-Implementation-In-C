#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "doubly_linked_list.c"

void func(struct node node)
{
    printf("{ value: %d, next: %d, previous: %d }\n", node.value, node.next, node.previous);
};

int main()
{
    struct node *point = NULL;
    point = add_node(&point, 2);

    struct node *head, *tail;
    head = point;
    tail = point;

    add_node(&head, 8);
    add_node(&head, 16);
    add_node(&head, 98);
    add_node(&head, 53);
    push_node(&tail, 8);
    push_node(&tail, 1);
    push_node(&tail, 33);
    push_node(&tail, 7);

    printf("\n-------------------Loop-------------------\n");

    loop(head, func, false);

    printf("\n-------------------Reverse Loop-------------------\n");

    loop(tail, func, true);

    return 0;
}