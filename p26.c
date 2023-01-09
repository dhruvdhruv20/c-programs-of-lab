#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

// Function to check if a number is a palindrome
bool is_palindrome(int n)
{
    int num = n;
    int rev = 0;

    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    return n == rev;
}

// Function to check if a number is an Armstrong number
bool is_armstrong(int n)
{
    int num = n;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return n == sum;
}

int main()
{
    int N, i;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < N; i++)
    {
        int num = arr[i];

        if (is_prime(num))
        {
            // Convert the element to the next palindrome number
            while (!is_palindrome(++num));
            arr[i] = num;
        }
        else
        {
            // Convert the element to the next Armstrong number
            while (!is_armstrong(++num));
            arr[i] = num;
        }
    }

    printf("Updated array: ");
    for (i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

