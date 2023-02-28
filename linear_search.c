#include <stdio.h>
#include "linear_search.h"

int search(int* arr, int key, int l, int r) {
    int i;
    for(int i = l; i <= r; i++) {
        if(key == arr[i]) return i;
    }
    return -1;
}

void init_linear_search_example() {
    printf("Linear Search Example:\n");
    int arr[5] = {1,4,7,9,16};
    int key = 7;
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    int pos = search(arr, key, l, r);
    pos != -1 ? printf("Found the key %d on pos %d in the array.\n", key, pos) : printf("Could not find the key %d in the array.\n", key);
    printf("\n");
}
