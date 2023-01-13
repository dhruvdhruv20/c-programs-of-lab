//WAP to categorize each element of an array as prime or not using pointers:
	#include <stdio.h>
#include <stdbool.h>

// Check if a number is prime
bool is_prime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

// Categorize each element of the array as prime or not using pointers
void categorize_array_elements(int* arr, bool* is_prime_arr, int size) {
  // Iterate through the array using pointers
  for (int i = 0; i < size; i++) {
    *(is_prime_arr + i) = is_prime(*(arr + i));
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arr) / sizeof(int);
  bool is_prime_arr[size];

  // Categorize each element of the array as prime or not
  categorize_array_elements(arr, is_prime_arr, size);

  // Print the results
  for (int i = 0; i < size; i++) {
    printf("%d is%s prime\n", *(arr + i), *(is_prime_arr + i) ? "" : " not");
  }

  return 0;
}

