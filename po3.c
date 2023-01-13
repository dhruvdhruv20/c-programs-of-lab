//Here is a program to find the factorial of a number using pointers:
	#include <stdio.h>

int main(void) {
    int n;
    int *p = &n;

    printf("Enter a number: ");
    scanf("%d", p);

    int factorial = 1;
    for (int i = 1; i <= *p; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %d\n", *p, factorial);

    return 0;
}

