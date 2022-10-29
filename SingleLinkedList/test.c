#include <stdlib.h>
#include <stdio.h>
#include "linked_list.c"

void func(struct node node)
{
    printf("%d - %d\n", node.value, node.next);
};

int main()
{
    struct node *head = NULL;
    add_node(&head, 2);
    add_node(&head, 16);
    add_node(&head, 98);
    add_node(&head, 53);

    loop(head, func);

    return 0;
}