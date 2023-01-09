//8. Write a c program to read the marks of 500 students of a course in computer programming and print the frequency of each score above 60. Do it using most efficient method you could taking minimum memory and minimum time.
#include <stdio.h>

#define NUM_STUDENTS 500 // number of students
#define MIN_SCORE 60 // minimum score to be counted

int main(void) {
  int i, mark, frequencies[101] = {0}; // frequencies of marks from 0 to 100

  for (i = 0; i < NUM_STUDENTS; i++) {
    scanf("%d", &mark); // read the next mark

    if (mark >= MIN_SCORE) { // increment the frequency of this mark if it is above the minimum
      frequencies[mark]++;
    }
  }

  for (i = MIN_SCORE; i <= 100; i++) { // print the frequencies of each mark above the minimum
    if (frequencies[i] > 0) {
      printf("%d: %d\n", i, frequencies[i]);
    }
  }

  return 0;
}

