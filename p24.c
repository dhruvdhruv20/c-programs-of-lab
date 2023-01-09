#include <stdio.h>

int main()
{
    int N, elem, i;
    int arr[100];
    int count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to find: ");
    scanf("%d", &elem);

    // Count the number of occurrences of the element
    for (i = 0; i < N; i++)
        if (arr[i] == elem)
            count++;

    printf("Frequency of %d: %d\n", elem, count);

    return 0;
}

