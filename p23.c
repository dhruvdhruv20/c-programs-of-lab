#include <stdio.h>

int main()
{
    int N, R, i;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the number of rotations: ");
    scanf("%d", &R);

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Mod the number of rotations by the size of the array
    R = R % N;

    printf("Final array: ");
    for (i = N - R; i < N; i++)
        printf("%d ", arr[i]);
    for (i = 0; i < N - R; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

