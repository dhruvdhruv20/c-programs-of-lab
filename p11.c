//11. Write a c program to input an array of N number of elements and swap the largest and smallest element in that array and print the updated array.
#include <stdio.h>

int main(void) {
  int n, i, min_index, max_index, temp, a[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  min_index = max_index = 0; // assume that the first element is both the largest and the smallest
  for (i = 1; i < n; i++) {
    if (a[i] < a[min_index]) {
      min_index = i; // update the index of the minimum value if a smaller value is found
    }
    if (a[i] > a[max_index]) {
      max_index = i; // update the index of the maximum value if a larger value is found
    }
  }

  // swap the minimum and maximum values
  temp = a[min_index];
  a[min_index] = a[max_index];
  a[max_index] = temp;

  printf("Updated array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

