#include <stdio.h>

int main(void) {
  int n, i, x, pos, a[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter the element to insert: ");
  scanf("%d", &x);

  printf("Enter the position to insert at: ");
  scanf("%d", &pos);

  // shift elements from pos to the end of the array one position to the right
  for (i = n-1; i >= pos; i--) {
    a[i+1] = a[i];
  }

  // insert the new element at pos
  a[pos] = x;
  n++; // increment the size of the array

  printf("Final array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

