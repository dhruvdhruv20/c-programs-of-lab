//Here is a C program that will input a 2D array of size M*N, and then display the transpose of it:
#include <stdio.h>

#define M 3
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

    // Print the transpose of the array
    printf("Transpose of the array:\n");
    for (j = 0; j < N; j++) {
        for (i = 0; i < M; i++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}


