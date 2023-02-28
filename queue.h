#ifndef __queue__
#define __queue__

typedef struct queue Queue, *queueptr;

typedef struct queue {
    listptr list;
} Queue, *queueptr;

queueptr init_queue();

void queue_push(queueptr queue, int value);

void queue_pop(queueptr queue);

void free_queue(queueptr queue);

#endif