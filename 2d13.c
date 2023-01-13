//WAP to input 2 matrixes and multiply them.
#include <stdio.h>

#define M 3
#define N 4
#define P 5

int main() {
    int A[M][N];
    int B[N][P];
    int C[M][P];
    int i, j, k;

    // Input elements of matrix A
    printf("Enter elements of the %dx%d matrix A:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter elements of the %dx%d matrix B:\n", N, P);
    for (i = 0; i < N; i++) {
        for (j = 0; j < P; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize elements of matrix C to 0
    for (i = 0; i < M; i++) {
        for (j = 0; j < P; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply matrix A and matrix B, and store the result in matrix C
    for (i = 0; i < M; i++) {
        for (j = 0; j < P; j++) {
            for (k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix C
    printf("Resulting matrix:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < P; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

