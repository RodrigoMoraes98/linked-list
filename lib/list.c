#include "list.h"

Node *head = NULL;

Node *addNode(int data) {
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL){
        return NULL;
    }
    new_node->data = data;
    
    if (head == NULL) {    
        head = new_node;
        new_node->next = NULL;

    } else {
        new_node->next = head;
        head = new_node;
    }

    return new_node;
}

int removeNode(int data) {
    Node *current = head;
    Node *prev = head;

    while (current != NULL) {
        if (current->data == data) {
            if (current == head) {
                head = current->next;
            } else {
                prev->next = current->next;
                free(current);
                current = NULL;
            }

            return 1;
        }
        prev = current;
        current = current->next;
    }

    return 0;
}

void printList() {
    Node* current = head;

    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("\n");
}