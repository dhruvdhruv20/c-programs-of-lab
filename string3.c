//Here's a program that takes a string from the user and counts the number of lowercase and uppercase alphabets, digits, spaces, and special characters:
#include<stdio.h>
int main() {
    char str[1000];
    int i, lower = 0, upper = 0, digit = 0, space = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string from user

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else if (str[i] == ' ') {
            space++;
        } else {
            special++;
        }
    }

    printf("Lowercase characters: %d\n", lower);
    printf("Uppercase characters: %d\n", upper);
    printf("Digits: %d\n", digit);
    printf("Spaces: %d\n", space);
    printf("Special characters: %d\n", special-1);

    return 0;
}
	
