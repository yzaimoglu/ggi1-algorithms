#include <stdio.h>
#include "binary_search.h"

int binary_search(int* arr, int key, int l, int r) {
    int k;
    
    while(r >= l) {
        k = (l+r)/2;
        if(key == arr[k]) return k;
        if(key < arr[k]) r = k-1;
        else l = k+1;
    }
    return -1;
}

void init_binary_search_example() {
    printf("Binary Search Example:\n");
    int arr[7] = {3,5,711,13,17,19};
    int key = 17;
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    int pos = binary_search(arr, key, l, r);
    pos != -1 ? printf("Found the key %d on pos %d in the array.\n", key, pos) : printf("Could not find the key %d in the array.\n", key);
    printf("\n");
}