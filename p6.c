//6. Write a C-program to input an array of N number of elements and find their standard deviation
#include <stdio.h>
#include <math.h>

int main() {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int a[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  // Calculate the mean of the array
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  float mean = (float)sum / n;

  // Calculate the standard deviation
  float sum_squared_differences = 0;
  for (int i = 0; i < n; i++) {
    float difference = a[i] - mean;
    sum_squared_differences += difference * difference;
  }
  float variance = sum_squared_differences / n;
  float standard_deviation = sqrt(variance);

  printf("Standard deviation: %f\n", standard_deviation);

  return 0;
}

