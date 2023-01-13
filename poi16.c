#include <stdio.h>

#define NUM_SUBJECTS 8

// Function to read marks of a student
void readMarks(int *marks)
{
printf("Enter marks of %d subjects: ", NUM_SUBJECTS);
for (int i = 0; i < NUM_SUBJECTS; i++)
scanf("%d", marks + i);
}

// Function to find the occurrence of a given number
void find(int *marks, int num)
{
int count = 0;
for (int i = 0; i < NUM_SUBJECTS; i++)
{
if (marks[i] == num)
count++;
}

if (count == 0)
    printf("%d was not found.\n", num);
else
    printf("%d was found %d times.\n", num, count);
}

// Function to replace a given number with another number
void replace(int *marks, int old, int new)
{
for (int i = 0; i < NUM_SUBJECTS; i++)
{
if (marks[i] == old)
marks[i] = new;
}
}

int main()
{
int marks[NUM_SUBJECTS];


// Read the marks of the student
readMarks(marks);

// Find the occurrence of a given number
find(marks, 10);

// Replace a given number with another number
replace(marks, 10, 0);

return 0;
}


