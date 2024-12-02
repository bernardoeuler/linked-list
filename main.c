#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(Node* head, int data);
Node* readNode(Node* head, unsigned position);
void printNodes(Node* head);

int main() {
    Node* head = createNode(NULL, 1);

    for (int i = 2; i <= 10; i++) {
        createNode(head, i);
    }

    printNodes(head);

    int i = 2;
    Node* node = readNode(head, i);
    printf("\nNode read: index = %d, addr = %p, data = %d, next = %p\n", i, node, node->data, node->next);



    return 0;
}

Node* createNode(Node* head, int data) {
    if (head == NULL) {
        Node* new_node = malloc(sizeof(Node));
        new_node->data = data;
        new_node->next = NULL;
        return new_node;
    }

    Node* current_node = head;
    Node* new_node = malloc(sizeof(Node));

    while (current_node->next) {
        current_node = current_node->next;
    }

    current_node->next = new_node;
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

Node* readNode(Node* head, unsigned position) {
    if (head == NULL) {
        return NULL;
    }

    Node* current_node = head;
    unsigned count = 0;

    while (count < position && current_node) {
        current_node = current_node->next;
        count++;
    }

    return current_node;
}

void printNodes(Node* head) {
    Node* current_node = head;
    unsigned count = 1;

    printf("| NODE |  MEM. ADDRESS  | DATA |    NEXT NODE    |\n");

    while (current_node) {
        printf("| %4u | %14p | %4d | %15p |\n", count, current_node, current_node->data, current_node->next);
        current_node = current_node->next;
        count++;
    }
}