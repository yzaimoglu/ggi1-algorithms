#include <stdio.h>
#include "insertion_sort.h"
#include "util.h"

// insertion sort algorithm
void insertion_sort(int* arr, int l, int r) {
    // worst, average & best case O(n^2)
    for(int i = l+1; i < r; i++) {
        for(int j = i; j > l; j--) {
            if(arr[j-1] > arr[j]) {
                exchange(&arr[j-1], &arr[j]);
            } else break;
        }
        printf("%d: ", i);
        print_array(arr, r);
    }
}

void init_insertion_sort_example() {
    printf("Insertion Sort Example:\n");
    int arr[5] = {5,92,46,13,6};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort:\n");
    print_array(arr, r);
    printf("During Sort:\n");
    insertion_sort(arr, l, r);
    printf("After Sort:\n");
    print_array(arr, r);
    printf("\n");
}