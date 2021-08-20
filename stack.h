#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct node Node;

Node * make_stack(void);
// returns NULL on failure
bool push(Node *, char);
// returns true if successfully cerated node on stack
char peak(Node *);
// returns value at top of stack
char pop(Node *);
// destroys top node and returns its value
bool destroy_stack(Node *);
// frees entire stack
// returns false if Node* == NULL

#endif
