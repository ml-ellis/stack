#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main(void) {
    Node *head = make_stack();
    if (!head) {
        printf("failed to allocate a stack.\n");
        printf("terminating program.\n");
        return EXIT_FAILURE;
    }
    push(head, 'a');
    printf("%c\n", peak(head));
    push(head, 'b');
    printf("%c\n", peak(head));
    push(head, 'c');
    printf("%c\n", peak(head));
    pop(head);
    printf("%c\n", peak(head));
    printf("did stack destroy? %s\n", destroy_stack(head) ? "true" : "false");

    return EXIT_SUCCESS;
}
