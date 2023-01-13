//WAP that prints the position of the largest element in an array using pointers:
#include <stdio.h>

// Find the position of the largest element in the array using pointers
int find_largest_element_position(int* arr, int size) {
  // Initialize the maximum element and its position
  int max_element = *arr, max_element_pos = 0;

  // Iterate through the array using pointers
  for (int i = 0; i < size; i++) {
    if (*(arr + i) > max_element) {
      max_element = *(arr + i);
      max_element_pos = i;
    }
  }

  return max_element_pos;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arr) / sizeof(int);

  // Find the position of the largest element in the array
  int largest_element_pos = find_largest_element_position(arr, size);
  printf("The position of the largest element in the array is: %d\n", largest_element_pos);

  return 0;
}
	
