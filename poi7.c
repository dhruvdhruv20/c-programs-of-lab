//WAP to search an element in an array using pointers:
#include <stdio.h>

int main(void) {
  // Declare variables
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr, num, found = 0;

  // Get number to search for
  printf("Enter a number to search for: ");
  scanf("%d", &num);

  // Set pointer to start of array
  ptr = arr;

  // Search array
  for (int i = 0; i < 5; i++) {
    if (*ptr == num) {
      found = 1;
      break;
    }
    ptr++;
  }

  // Print result
  if (found) {
    printf("Number found!\n");
  } else {
    printf("Number not found.\n");
  }

  return 0;
}
	
