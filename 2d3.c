//.WAPtoinputa2DarrayofsizeM*Nandfindthesum ofindividualrowsandindividualcolumns.
#include <stdio.h>

#define M 3
#define N 4

int main() {
    int array[M][N];
    int i, j;
    int row_sum[M], col_sum[N];

    // Input elements of the array
    printf("Enter elements of the %dx%d array:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Find the sum of each row
    for (i = 0; i < M; i++) {
        row_sum[i] = 0;
        for (j = 0; j < N; j++) {
            row_sum[i] += array[i][j];
        }
    }

    // Find the sum of each column
    for (j = 0; j < N; j++) {
        col_sum[j] = 0;
        for (i = 0; i < M; i++) {
            col_sum[j] += array[i][j];
        }
    }

    // Print the sum of each row
    printf("Row sums: ");
    for (i = 0; i < M; i++) {
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    // Print the sum of each column
    printf("Column sums: ");
    for (j = 0; j < N; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    return 0;
}

