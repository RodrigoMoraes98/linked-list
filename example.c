#include "lib/list.h"

int main() {

    // Create nodes
    Node *first = addNode(10);
    Node *second = addNode(20);
    Node *third = addNode(30);

    // print the list
    printList();

    // Remove an element
    removeNode(20);

    // Print the list again
    printList();
    
    return 0;
}
