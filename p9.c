//9. Write ac program to input an array of N number of elements and find the largest element in that array.
#include <stdio.h>

int main(void) {
  int n, i, max, a[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  max = a[0]; // assume that the first element is the largest
  for (i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i]; // update the maximum value if a larger value is found
    }
  }

  printf("Largest element: %d\n", max);

  return 0;
}

