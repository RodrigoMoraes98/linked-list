#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void *next;
    int data;
} Node;

/*!
    Adds a node to the list.
    @param data an integer to be added to the list.
    @return a node containing the data.
*/
Node *addNode(int data);

/*!
    Removes a node from the list.
    @param data the data to be removed.
    @returns 1 if the data was removed, 0 if did not find the data in the list.
*/
int removeNode(int data);

// Print the list.
void printList();

#endif
