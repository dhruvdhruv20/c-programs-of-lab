//4.Write a c program to input an array of N number of elements and count total number of positives, negatives and zero elements in that array and display those counts.
#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int a[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int num_positives = 0;
  int num_negatives = 0;
  int num_zeros = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      num_positives++;
    } else if (a[i] < 0) {
      num_negatives++;
    } else {
      num_zeros++;
    }
  }

  printf("Number of positives: %d\n", num_positives);
  printf("Number of negatives: %d\n", num_negatives);
  printf("Number of zeros: %d\n", num_zeros);

  return 0;
}

