#include <stdio.h>
#include "util.h"
#include "heap_sort.h"

void sink(int* arr, int k, int size) {
    int son;
    if(2*k > size) return;
    if(2*k+1 <= size) {
        if(arr[2*k] < arr[2*k+1]) son = 2*k;
        else son = 2*k+1;
    } else son = 2*k;
    if(arr[k] > arr[son]) {
        exchange(&arr[k], &arr[son]);
        sink(arr, son, size);
    } else return;
}

void heap_sort(int* arr, int size) {
    int i;
    for(i = size/2; i > 0; i--) {
        sink(arr, i, size);
    }
    for(i = size; i > 1; i--) {
        exchange(&arr[1], &arr[i]);
        printf("%d: ", i);
        print_array(arr, size);
        sink(arr, 1, i-1);
    }
}

void init_heap_sort_example() {
    printf("Heap Sort Example:\n");
    int arr[7] = {45, 63, 35, 52, 2, 12, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort:\n");
    print_array(arr, size);
    printf("During Sort:\n");
    heap_sort(arr, size);
    printf("After Sort:\n");
    print_array(arr, size);
    printf("\n");
}