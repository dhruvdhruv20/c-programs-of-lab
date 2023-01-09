#include <stdio.h>

int main(void) {
  int n, m, i, j, x, pos, a[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter the number of elements to insert: ");
  scanf("%d", &m);

  for (i = 0; i < m; i++) {
    printf("Enter element %d to insert: ", i+1);
    scanf("%d", &x);

    printf("Enter position %d to insert at: ", i+1);
    scanf("%d", &pos);

    // shift elements from pos to the end of the array one position to the right
    for (j = n-1; j >= pos; j--) {
      a[j+1] = a[j];
    }

    // insert the new element at pos
    a[pos] = x;
    n++; // increment the size of the array
  }

  printf("Final array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

