//Write a C program to find the frequency of a character in a string entered by the user using pointers:
#include <stdio.h>
#include <string.h>

int main()
{
char str[100];
char *p;
int count = 0;
char ch;

printf("Enter a string: ");
gets(str);

printf("Enter the character to find its frequency: ");
scanf("%c", &ch);

p = str;

while (*p != '\0')
{
if (*p == ch)
count++;
p++;
}

printf("Frequency of '%c' = %d\n", ch, count);

return 0;
}
