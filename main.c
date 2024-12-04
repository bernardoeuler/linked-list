#include <stdio.h>
#include <stdlib.h>

#include "linked-list.h"

int main() {
    Node* head = appendNode(NULL, 1);

    for (int i = 2; i <= 10; i++) {
        appendNode(head, i);
    }

    printNodes(head);

    int i = 2;
    Node* node = readNode(head, i);
    printf("\nNode read: index = %d, addr = %p, data = %d, next = %p\n", i, node, node->data, node->next);

    printf("Now, let's create a node at index 2\n");

    insertNode(head, 2, 222);

    printNodes(head);

    return 0;
}