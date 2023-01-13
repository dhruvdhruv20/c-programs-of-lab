//9.WAP to input a matrix and check if it's an identity matrix or not.
#include <stdio.h>
#include <stdbool.h>

#define M 3
#define N 3

int main() {
    int array[M][N];
    int i, j;
    bool is_identity = true;

    // Input elements of the array
    printf("Enter elements of the %dx%d array:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Check if the array is an identity matrix
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (i == j && array[i][j] != 1) {
                is_identity = false;
                break;
            }
            if (i != j && array[i][j] != 0) {
                is_identity = false;
                break;
            }
        }
        if (!is_identity) {
            break;
        }
    }

    if (is_identity) {
        printf("The array is an identity matrix.\n");
    } else {
        printf("The array is not an identity matrix.\n");
    }

    return 0;
}

