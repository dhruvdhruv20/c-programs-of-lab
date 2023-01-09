//14. Write a c program to input an array of N number of elements (Elements can repeat). Input an element you want to search and find it. If found then print all the positions of that element otherwise print not found.
#include <stdio.h>

int main(void) {
  int n, i, x, a[100], found;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter the element to search for: ");
  scanf("%d", &x);

  found = 0;
  for (i = 0; i < n; i++) {
    if (a[i] == x) {
      printf("%d found at index %d\n", x, i);
      found = 1;
    }
  }

  if (!found) {
    printf("%d not found\n", x);
  }

  return 0;
}

