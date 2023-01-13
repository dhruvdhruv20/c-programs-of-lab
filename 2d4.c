//4.WAPtoinputa2DarrayofsizeM*Nanddisplayboundaryelementsinmatrixform.
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

    // Print the boundary elements
    printf("Boundary elements:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (i == 0 || i == M - 1 || j == 0 || j == N - 1) {
                printf("%d ", array[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

