// Here is a C program that will input an array of N elements and display it in reverse order:
#include <stdio.h>

int main(void) {
  // Get the number of elements in the array
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  // Initialize the array
  int array[n];

  // Get the elements of the array
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  // Display the array in reverse order
  for (int i = n - 1; i >= 0; i--) {
    printf("%d\n", array[i]);
  }

  return 0;
}

