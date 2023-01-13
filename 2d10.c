//10.WAP to input a matrix of order M*N and check if it's a sparse matrix or dense matrix.
#include <stdio.h>
#include <stdbool.h>

#define M 3
#define N 3

int main() {
    int array[M][N];
    int i, j;
    int count = 0;

    // Input elements of the array
    printf("Enter elements of the %dx%d array:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
            if (array[i][j] != 0) {
                count++;
            }
        }
    }

    // Check if the array is sparse or dense
    if (count > (M * N) / 2) {
        printf("The array is a dense matrix.\n");
    } else {
        printf("The array is a sparse matrix.\n");
    }

    return 0;
}

