#include <stdio.h>

int main()
{
    int N, elem, i, pos = -1;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to delete: ");
    scanf("%d", &elem);

    // Find the position of the element to delete
    for (i = 0; i < N; i++)
        if (arr[i] == elem)
        {
            pos = i;
            break;
        }

    // Check if the element was found
    if (pos == -1)
    {
        printf("Element not found\n");
        return 0;
    }

    // Shift the elements after the deleted element to the left
    for (i = pos; i < N - 1; i++)
        arr[i] = arr[i + 1];

    // Decrement the size of the array
    N--;

    printf("Updated array: ");
    for (i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

