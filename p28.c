#include <stdio.h>

int main()
{
    int N, i, j, k;
    int arr[100];
    int count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Find the duplicate elements and delete them
    for (i = 0; i < N; i++)
        for (j = i + 1; j < N; j++)
            if (arr[i] == arr[j])
            {
                // Shift the elements after the duplicate element to the left
                for (k = j; k < N - 1; k++)
                    arr[k] = arr[k + 1];

                // Decrement the size of the array and the index of the element being compared
                N--;
                j--;
            }

    printf("Updated array: ");
    for (i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

