#include <stdio.h>
#include "util.h"

void exchange(int* i, int* j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void print_array(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_sub_array(int* arr, int l, int r) {
    for(int i = l; i < r; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}