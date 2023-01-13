//WAP to sort elements of an array using pointers:
#include <stdio.h>

int main(void) {
  // Declare variables
  int arr[5] = {5, 4, 3, 2, 1};
  int *ptr, temp;

  // Set pointer to start of array
  ptr = arr;

  // Sort array
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (*(ptr + i) > *(ptr + j)) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
      }
    }
  }

  // Print sorted array
  printf("Sorted array: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", *(ptr

