#include <stdio.h>

int main()
{
    int N, pos, i;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 0 || pos >= N)
    {
        printf("Invalid position\n");
        return 0;
    }

    // Save the element to be deleted
    int elem = arr[pos];

    // Shift the elements after the deleted element to the left
    for (i = pos; i < N - 1; i++)
        arr[i] = arr[i + 1];

    // Decrement the size of the array
    N--;

    printf("Deleted element: %d\n", elem);
    printf("Updated array: ");
    for (i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

