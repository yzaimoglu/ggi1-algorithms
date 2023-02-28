#ifndef __stack__
#define __stack__

typedef struct stack Stack, *stackptr;

typedef struct stack {
    listptr list;
} Stack, *stackptr;

stackptr init_stack();

void stack_push(stackptr s, int value);

void stack_pop(stackptr s);

void free_stack(stackptr stack);

#endif