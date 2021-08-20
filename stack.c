#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

struct node {
  char character;
  Node *next;
};

Node * make_stack() {
    Node *head = (Node *)malloc(sizeof(Node));
    if (head != NULL) {
        head->character = '\0';
        head->next = NULL;
    }
    return head;
  }

bool push(Node *head, char c) {
    if (head == NULL) return false;
    Node *node = (Node *)malloc(sizeof(Node));
    if (node != NULL) {
        node->next = head->next;
        head->next = node;
        node->character = c;
        return true;
    } else return false;
}

char peak(Node *head) {
    if (head == NULL) return '\0';
    return head->next->character;
}

char pop(Node *head) {
    if (head == NULL || head->next == NULL) return '\0';
    Node *second;
    second = head->next;
    head->next = head->next->next;
    char c = second->character;
    free(second);
    return c;
}

bool destroy_stack(Node *head) {
    if (head == NULL) return false;
    Node *tracker;
    while (head != NULL) {
        tracker = head;
        head = tracker->next;
        free(tracker);
    }
    return true;
}
