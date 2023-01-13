//Write a program in C to calculate the determinant of a 3x3 matrix.
#include <stdio.h>

int main() {
    int array[3][3];
    int i, j;
    int determinant;

    // Input elements of the array
    printf("Enter elements of the 3x3 array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Calculate the determinant of the array
    determinant = array[0][0] * (array[1][1] * array[2][2] - array[1][2] * array[2][1]) -
                  array[0][1] * (array[1][0] * array[2][2] - array[1][2] * array[2][0]) +
                  array[0][2] * (array[1][0] * array[2][1] - array[1][1] * array[2][0]);

    printf("Determinant of the array: %d\n", determinant);

    return 0;
}

