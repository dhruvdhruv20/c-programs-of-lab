#include <stdio.h>

int main()
{
    int M, N, i, j;
    int arr[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &M);
    printf("Enter the number of columns: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &arr[i][j]);

    printf("Array:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}

