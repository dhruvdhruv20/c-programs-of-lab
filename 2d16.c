//WAP to input a matrix and print it in zigzag form.
v#include <stdio.h>

#define M 4
#define N 4

int main() {
    int array[M][N];
    int i, j;

    // Input elements of the array
    printf("Enter elements of the %dx%d array:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Print the array in zigzag form
    printf("Zigzag form:\n");
    for (i = 0; i < M; i++) {
        if (i % 2 == 0) {
            // Print elements from left to right
            for (j = 0; j < N; j++) {
                printf("%d ", array[i][j]);
            }
        } else {
            // Print elements from right to left
            for (j = N - 1; j >= 0; j--) {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

