//WAP to compute simple interest using pointers:
#include <stdio.h>

int main(void) {
  // Declare variables
  float principal, rate, time, interest;

  // Get user input
  printf("Enter principal, rate, and time (in years): ");
  scanf("%f %f %f", &principal, &rate, &time);

  // Compute simple interest using pointers
  interest = principal * rate * time;

  // Print result
  printf("Simple interest is: %f\n", interest);

  return 0;
}

