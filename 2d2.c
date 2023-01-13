//2.WAP c program toinputa2DarrayofsizeM*Nandfindthesumandaverageofalltheelements.
#include <stdio.h>

#define M 3
#define N 4

int main() {
    int array[M][N];
    int i, j;
    int sum = 0;
    float average;

    // Input elements of the array
    printf("Enter elements of the %dx%d array:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Find the sum of all elements
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            sum += array[i][j];
        }
    }

    // Calculate the average of all elements
    average = (float) sum / (M * N);

    printf("Sum of all elements: %d\n", sum);
    printf("Average of all elements: %.2f\n", average);

    return 0;
}

