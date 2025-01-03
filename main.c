#include <stdio.h>
#include <stdlib.h>

#include "linked-list.h"

int main() {
    Node* head = NULL;

    for (int i = 1; i <= 10; i++) {
        appendNode(&head, i);
    }

    printf("Linked list now:\n");
    printNodes(head);

    insertNode(&head, 0, 0);

    printf("\nAdding new node at first position\n");
    printNodes(head);

    printf("\nRemoving node at first position\n");
    Node* removed_node = removeNode(&head, 0);

    printNodes(head);

    printf("\nThe removed node was %p.\n", removed_node);

    return 0;
}