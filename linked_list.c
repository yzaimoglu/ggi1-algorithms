#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

listptr new_empty_list() {
    listptr list;
    list = (listptr) malloc(sizeof(List));
    list->first = 0;
    list->last = 0;
    return list;
}

void delete_list(listptr list) {
    while(!is_empty(list)) {
        list->first = list->first->next;
        free(list->first);
    }
    free(list);
}

nodeptr new_node(int item) {
    nodeptr node;
    node = (nodeptr) malloc(sizeof(Node));
    node->data = item;
    node->next = 0;
    return node;
}

void append_first(listptr list, int item) {
    nodeptr create_node = new_node(item);
    if(is_empty(list)) {
        list->first = create_node;
        list->last = create_node;
    } else {
        create_node->next = list->first;
        list->first = create_node;
    }
}

void append_last(listptr list, int item) {
    nodeptr create_node = new_node(item);
    if(is_empty(list)) {
        list->first = create_node;
        list->last = create_node;
    } else {
        list->last->next = create_node;
        list->last = create_node;
    }
}

int is_in(listptr list, int item) {
    if(is_empty(list)) return 0;
    nodeptr node = list->first;
    while(node != 0) {
        if(node->data == item) return 1;
        node = node->next;
    }
    return 0;
}

int is_empty(listptr list) {
    return (list->first == 0);
}

void delete_item(listptr list, int item) {
    if(is_empty(list)) return;
    int check = 0;
    nodeptr node = list->first;
    nodeptr prev_node;
    while(node != 0) {
        // helpful to get the prev_node
        if(node->data == list->first->data) check = 1;
        if(check) {
            prev_node = list->first;
            check = 0;
        }
        if(node->data == item) {
            nodeptr next_node = node->next;
            if(node == list->first) {
                list->first = next_node;
            } else if(node == list->last) {
                list->last = prev_node;
                prev_node->next = 0;
            } else {
                prev_node->next = next_node;
            }
            free(node);
            return;
        }
        prev_node = prev_node->next;
        node = node->next;
    }
}

void print_list(listptr list) {
    if(is_empty(list)) {
        printf("Empty\n");
    } else {
        nodeptr node = list->first;
        while(node != 0) {
            printf("%d ", node->data);
            node = node->next;
        }
        printf("\n");
    }
}

listptr union_operation(listptr first_list, listptr second_list) {
    if (is_empty(first_list)) return second_list; 
    if (is_empty(second_list)) return first_list; 
    first_list->last->next = second_list->first;
    first_list->last = second_list->last; 
    return first_list; 
}

listptr intersect_operation(listptr first_list, listptr second_list) {
    nodeptr np;
    listptr result_list = new_empty_list();
    np = first_list->first; 
    while (np != NULL) {
        if (is_in(second_list, np->data)) append_last(result_list, np->data); 
        np = np->next; 
    } 
    return result_list;
}