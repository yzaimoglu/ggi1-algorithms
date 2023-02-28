#include <stdio.h>
#include "linear_search.h"
#include "binary_search.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "heap_sort.h"
#include "quick_sort.h"
#include "util.h"
#include "linked_list.h"
#include "queue.h"
#include "stack.h"

int main() {
    printf("%s\n", "---------------------------------");
    // printf("%d\n", 7/4);
    // printf("%.2f\n", 7/4);
    // printf("%.2f\n", 7./4);
    // printf("%.5f\n", 7.0/4);
    // printf("%.2f\n", 7.00/4);
    // printf("%d\n", -100);
    // printf("%d\n", (-100 << 3));
    // printf("\n");

    // init_linear_search_example();
    // init_binary_search_example();
    // init_selection_sort_example();
    // init_insertion_sort_example();
    // init_quick_sort_example();
    // init_heap_sort_example();

    // int a = 2;
    // int b = 5;
    // int c = UND(a,b);
    // printf("%d\n", c);

    // listptr list = new_empty_list();
    // print_list(list);
    // append_first(list, 5);
    // append_first(list, 7);
    // append_first(list, 8);
    // append_last(list, 12);
    // // 8 7 5 12
    // print_list(list);
    // delete_list(list);

    queueptr queue = init_queue();
    queue_push(queue, 5);
    print_list(queue->list);
    queue_push(queue, 10);
    print_list(queue->list);
    queue_push(queue, 20);
    print_list(queue->list);
    queue_pop(queue);
    print_list(queue->list);
    queue_pop(queue);
    print_list(queue->list);

    printf("---------\n");

    stackptr stack = init_stack();
    stack_push(stack, 5);
    print_list(stack->list);
    stack_push(stack, 10);
    print_list(stack->list);
    stack_push(stack, 20);
    print_list(stack->list);
    stack_pop(stack);
    print_list(stack->list);
    stack_pop(stack);
    print_list(stack->list);

    printf("%s\n", "---------------------------------");
    return 0;
}