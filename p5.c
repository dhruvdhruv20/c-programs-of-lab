//5. Write a c program to input an array of N number of elements and store all even numbers in 1 array and all odd numbers in another array .Print both the even and odd array separately
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

  int even[n];
  int num_even = 0;
  int odd[n];
  int num_odd = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      even[num_even++] = a[i];
    } else {
      odd[num_odd++] = a[i];
    }
  }

  printf("Even array: ");
  for (int i = 0; i < num_even; i++) {
    printf("%d ", even[i]);
  }
  printf("\n");

  printf("Odd array: ");
  for (int i = 0; i < num_odd; i++) {
    printf("%d ", odd[i]);
  }
  printf("\n");

  return 0;
}

