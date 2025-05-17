#include <stdio.h>

int main() {
    // Define a 2D array with 3 rows and 3 columns
    int numbers[3][3] = {
        {5, 8, 12},
        {3, 17, 1},
        {9, 4, 6}
    };

    int max = numbers[0][0]; // Start with the first element as max

    // Traverse the array to find the largest number
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (numbers[i][j] > max) {
                max = numbers[i][j];
            }
        }
    }

    // Output the largest number
    printf("The largest number in the array is: %d\n", max);

    return 0;
}
