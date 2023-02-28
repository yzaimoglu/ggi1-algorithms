#include <stdio.h>
#include "selection_sort.h"
#include "util.h"

// void selection_sort(int* arr, int l, int r) {
//     int i, j, min;
//     for(i = l; i < r; i++) {
//         min = i;
//         for(j = i+1; j <= r; j++) {
//             if(arr[j] < arr[min]) min = j;
//         }
//         exchange(&arr[i], &arr[min]);
//         print_array(arr, r);
//     }
// }

void selection_sort(int* arr, int l, int r) {
     // worst, average, best case O(n^2)
    for(int j = l; j < r; j++) {
        int min = j;
        for(int i = j; i < r; i++) {
            if(arr[min] > arr[i]) min = i;
        }
        exchange(&arr[j], &arr[min]);
        printf("%d: ", j+1);
        print_array(arr, r);
    }
}

void init_selection_sort_example() {
    printf("Selection Sort Example:\n");
    int arr[5] = {45,1,76,23,6};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort:\n");
    print_array(arr, r);
    printf("During Sort:\n");
    selection_sort(arr, l, r);
    printf("After Sort:\n");
    print_array(arr, r);
    printf("\n");
}