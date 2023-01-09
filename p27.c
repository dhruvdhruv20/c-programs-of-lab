#include <stdio.h>

int main()
{
    int N, i, j;
    int arr[100];
    int count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Find the perfect numbers and delete them
    for (i = 0; i < N; i++)
    {
        int num = arr[i];
        int sum = 0;

        for (j = 1; j < num; j++)
            if (num % j == 0)
                sum += j;

        if (sum == num)
        {
            // Shift the elements after the perfect number to the left
            for (j = i; j < N - 1; j++)
                arr[j] = arr[j + 1];

            // Decrement the size of the array and the index of the element being compared
            N--;
            i--;
        }
    }

    printf("Updated array: ");
    for (i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

