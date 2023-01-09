//12. Write a c program to input an array of N number of elements and find the second smallest element and 2nd largest element in that array.
#include <stdio.h>

int main(void) {
  int n, i, min1, min2, max1, max2, a[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  min1 = min2 = max1 = max2 = a[0]; // assume that the first element is both the largest and the smallest
  for (i = 1; i < n; i++) {
    if (a[i] < min1) {
      min2 = min1;
      min1 = a[i]; // update the minimum and second minimum values if a smaller value is found
    } else if (a[i] < min2) {
      min2 = a[i]; // update the second minimum value if a smaller value is found
    }
    if (a[i] > max1) {
      max2 = max1;
      max1 = a[i]; // update the maximum and second maximum values if a larger value is found
    } else if (a[i] > max2) {
      max2 = a[i]; // update the second maximum value if a larger value is found
    }
  }

  printf("Second smallest element: %d\n", min2);
  printf("Second largest element: %d\n", max2);

  return 0;
}

