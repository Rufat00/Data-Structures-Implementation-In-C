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
    head = add_node(head, 2);

    loop(head, func);

    return 0;
}