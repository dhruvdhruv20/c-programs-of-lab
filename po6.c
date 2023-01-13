//A train 240m in length crosses a telegraph post in 16 seconds. Write a C program to find the speed of a train in km/hr:
#include <stdio.h>

int main(void) {
  // Declare variables
  float distance = 240.0, time = 16.0, speed;

  // Convert distance to kilometers
  distance /= 1000;

  // Convert time to hours
  time /= 3600;

  // Compute speed
  speed = distance / time;

  // Print result
  printf("The speed of the train is: %f km/hr\n", speed);

  return 0;
}

