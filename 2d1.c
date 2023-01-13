//1.Write a c program toinputa2DarrayofsizeM*Nanddisplayitintabularform
#include <stdio.h>

int main(void) {
    int M, N;
    printf("Enter the number of rows: ");
    scanf("%d", &M);
    printf("Enter the number of columns: ");
    scanf("%d", &N);

    int array[M][N];

    // Input the array elements
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Display the array in tabular form
    printf("\nThe array elements are:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

