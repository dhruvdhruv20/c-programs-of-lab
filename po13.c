//Write a C program to find the sum of elements of an array using an array of pointers:
#include <stdio.h>

int main()
{
int arr[10];
int *p[10];
int sum = 0;
int i;

printf("Enter 10 numbers: ");
for (i = 0; i < 10; i++)
scanf("%d", &arr[i]);

for (i = 0; i < 10; i++)
p[i] = &arr[i];

for (i = 0; i < 10; i++)
sum += *p[i];

printf("Sum = %d\n", sum);

return 0;
}


