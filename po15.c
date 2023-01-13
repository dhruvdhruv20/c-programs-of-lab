//pallendrrome using pointer
#include <stdio.h>

// Function to check if a number is palindrome or not
void isPalindrome(int *num)
{
// Create a copy of the number
int copy = *num;


// Initialize the reverse of the number to 0
int reverse = 0;

// Calculate the reverse of the number
while (copy > 0)
{
    reverse = reverse * 10 + copy % 10;
    copy /= 10;
}

// Check if the number is palindrome
if (reverse == *num)
    printf("%d is a palindrome.\n", *num);
else
    printf("%d is not a palindrome.\n", *num);
}

int main()
{
int num;


// Read the number from the user
printf("Enter a number: ");
scanf("%d", &num);

// Call the function to check if the number is palindrome
isPalindrome(&num);

return 0;
}



