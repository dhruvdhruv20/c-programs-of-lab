//Here is a program to swap two numbers using double pointers:
#include <stdio.h>

void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 10, y = 20;
    int *a = &x, *b = &y;

    printf("Before swapping: a = %d, b = %d\n", *a, *b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", *a, *b);

    return 0;
}

