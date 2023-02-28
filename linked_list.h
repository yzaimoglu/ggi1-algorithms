#ifndef __linked_list__
#define __linked_list__

typedef struct node Node, *nodeptr;
typedef struct list List, *listptr;

typedef struct node {
    int data;
    nodeptr next;
} Node, *nodeptr;

typedef struct list {
    nodeptr first, last;
} List, *listptr;

listptr new_empty_list();
void delete_list(listptr list);

nodeptr new_node(int item);

void append_first(listptr list, int item);
void append_last(listptr list, int item);

int is_in(listptr list, int item);
int is_empty(listptr list);

void print_list(listptr list);

void delete_item(listptr list, int item);

listptr union_operation(listptr first_list, listptr second_list);
listptr intersect_operation(listptr first_list, listptr second_list);

#endif