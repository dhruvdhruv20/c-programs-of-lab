//7. Write a c program for Suppose there is president election in US and there are 2 candidates Trump and Biden .Input the votes of both the candidates in 10 states of US and calculate state- wise winner and over all winner.
#include <stdio.h>
#include <string.h>

int main() {
  const int num_states = 10;
  const int num_candidates = 2;

  char* states[num_states] = {"California", "Texas", "Florida", "New York", "Illinois", "Pennsylvania", "Ohio", "Michigan", "North Carolina", "Georgia"};
  char* candidates[num_candidates] = {"Trump", "Biden"};
  int votes[num_states][num_candidates];

  // Input the votes for each state
  for (int i = 0; i < num_states; i++) {
    printf("Enter the votes for %s:\n", states[i]);
    for (int j = 0; j < num_candidates; j++) {
      printf("%s: ", candidates[j]);
      scanf("%d", &votes[i][j]);
    }
  }

  // Calculate the state-wise winners
  char* state_winners[num_states];
  for (int i = 0; i < num_states; i++) {
    if (votes[i][0] > votes[i][1]) {
      state_winners[i] = candidates[0];
    } else {
      state_winners[i] = candidates[1];
    }
  }

  // Calculate the overall winner
  int candidate_votes[num_candidates] = {0, 0};
  for (int i = 0; i < num_states; i++) {
    if (strcmp(state_winners[i], candidates[0]) == 0) {
      candidate_votes[0] += votes[i][0];
    } else {
      candidate_votes[1] += votes[i][1];
    }
  }

  char* overall_winner;
  if (candidate_votes[0] > candidate_votes[1]) {
    overall_winner = candidates[0];
  } else {
    overall_winner = candidates[1];
  }

  // Print the results
  printf("State-wise winners:\n");
  for (int i = 0; i < num_states; i++) {
    printf("%s: %s\n", states[i], state_winners[i]);
  }
  printf("Overall winner: %s\n", overall_winner);

  return 0;
}

