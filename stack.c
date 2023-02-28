#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "stack.h"

stackptr init_stack() {
    stackptr stack = (stackptr) malloc(sizeof(Stack));
    stack->list = new_empty_list();
    return stack;
}

void stack_push(stackptr stack, int value) {
    append_first(stack->list, value);
}

void stack_pop(stackptr stack) {
    if(!is_empty(stack->list)) {
        nodeptr temp = stack->list->first;
        stack->list->first = stack->list->first->next;
        free(temp);
    }
}

void free_stack(stackptr stack) {
    free(stack);
}