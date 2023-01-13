//6.WAP to input a 2D array and find the sum of its diagonal elements.
#include <stdio.h>

#define M 3
#define N 3

int main() {
    int array[M][N];
    int i, j;
    int sum = 0;

    // Input elements of the array
    printf("Enter elements of the %dx%d array:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Find the sum of the diagonal elements
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (i == j || i == M - j - 1) {
                sum += array[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}

