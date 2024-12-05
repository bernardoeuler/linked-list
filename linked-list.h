typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* appendNode(Node* head, int data);
Node* insertNode(Node* head, unsigned position, int data);
Node* removeNode(Node* head, unsigned position);
Node* readNode(Node* head, unsigned position);
void printNodes(Node* head);