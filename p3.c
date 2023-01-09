//Write a c Program to input an array of N number of elements and find the sum and average of all the elements of that array.
#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int a[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &a[i]);
    sum += a[i];
  }

  float avg = (float)sum / n;
  printf("Sum: %d\n", sum);
  printf("Average: %.2f\n", avg);

  return 0;
}

