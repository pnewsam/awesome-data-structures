typedef struct {
  int value;
  Node *next;
} Node;

// Given the head of a Linked List, reverse it and return the new head
// 1 -> 2 -> 3 -> 4 -> 5
// becomes:
// 5 -> 4 -> 3 -> 2 -> 1
#include <stddef.h>

Node* reverseList(struct Node* head) {
    Node *prev = NULL;
    Node *next = NULL;
    Node *current = head;

    while(current != NULL) {
        // Save the next, before it gets overwritten
        next = current->next;
        // Set the new next
        current->next = prev;
        // Store the current node
        prev = current;
        // Continue to the next node
        current = next;
    }

    return prev;
}