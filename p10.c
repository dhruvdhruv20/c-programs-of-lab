//10. Write a c program to input an array of N number of elements and find the smallest element in that array
#include <stdio.h>

int main(void) {
  int n, i, min, a[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  min = a[0]; // assume that the first element is the smallest
  for (i = 1; i < n; i++) {
    if (a[i] < min) {
      min = a[i]; // update the minimum value if a smaller value is found
    }
  }

  printf("Smallest element: %d\n", min);

  return 0;
}

