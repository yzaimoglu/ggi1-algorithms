#include <stdio.h>
#include "quick_sort.h"
#include "util.h"

int partition(int arr[], int l, int r) { 
  int i,j,k,v;
  k = r; v = arr[k]; /* willk�rliches Trennelement */
  i = l; /* starte am linken Rand */ 
  j = r-1; /* starte am rechten Rand � 1 */
  while (1) { 
    while (arr[i] <= v && i < r) {
      i++;
    }
    while (arr[j] >= v && j >= l) {
      j--;
    }
    if (i >= j) /* aneinander vorbeigelaufen ? */
     break; /* Abbruch der for-Schleife */
    else {
     exchange(&arr[i], &arr[j]);
     print_sub_array(arr, l, r);
    }
  }
  exchange(&arr[i], &arr[k]);
  return i;
}

void quick_sort(int arr[], int l, int r) { 
  int k;
  if (r <= l) return;
  k = partition(arr,l,r);
  print_sub_array(arr, l, r); 
  quick_sort(arr,l,k-1);
  quick_sort(arr,k+1,r);
}

void init_quick_sort_example() {
    printf("Quick Sort Example:\n");
    int arr[7] = {42,67,12,3,99,5,65};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort:\n");
    print_array(arr, r);
    printf("During Sort:\n");
    quick_sort(arr, l, r);
    printf("After Sort:\n");
    print_array(arr, r);
    printf("\n");
}