#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "queue.h"

queueptr init_queue() {
    queueptr queue = (queueptr) malloc(sizeof(Queue));
    queue->list = new_empty_list();
    return queue;
}

void queue_push(queueptr queue, int value) {
    append_last(queue->list, value);
}

void queue_pop(queueptr queue) {
    if(!is_empty(queue->list)) {
        nodeptr temp = queue->list->first;
        queue->list->first = queue->list->first->next;
        free(temp);
    }
}

void free_queue(queueptr queue) {
    free(queue);
}