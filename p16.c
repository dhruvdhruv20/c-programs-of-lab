#include <stdio.h>

int main(void) {
  int n, i, j, temp, a[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n-1; i++) {
    for (j = 0; j < n-i-1; j++) {
      if (a[j] < a[j+1]) {
        // swap a[j] and a[j+1]
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }

  printf("Sorted array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

