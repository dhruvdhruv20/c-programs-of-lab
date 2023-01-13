//Write a C program to delete all the characters from a string entered by the user except 'A' and store it in the same array in sequence using pointers:
#include <stdio.h>
#include <string.h>

int main()
{
char str[100];
char *p;

printf("Enter a string: ");
gets(str);

p = str;

while (*p != '\0')
{
if (*p != 'A')
*p = '\0';
p++;
}

printf("Modified string: %s\n", str);

return 0;
}


