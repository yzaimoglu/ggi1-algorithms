#include <stdio.h>
#include "util.h"
#include "bubble_sort.h"

void bubble_sort(int arr[], int l, int r) { 
    int i, j;
    for (i = l; i < r; i++) { 
        for (j = r; j > i; j--) { 
            if (arr[j-1] > arr[j]) {
                exchange(&arr[j-1], &arr[j]); 
                print_array(arr, r);
            }
        }
    }
}


void init_bubble_sort_example() {
    printf("Bubble Sort Example:\n");
    int arr[8] = {85, 23, 65, 12, 6, 8, 432, 23};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort:\n");
    print_array(arr, r);
    bubble_sort(arr, l, r);
    printf("After Sort:\n");
    print_array(arr, r);
    printf("\n");
}