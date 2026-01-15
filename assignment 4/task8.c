#include <stdio.h>

int main() {
    int i, j;

    // Declare and initialize a 2D array with 6 rows and 4 columns
    int a[6][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    // Traverse and print each element of the 2D array
    for(i = 0; i < 6; i++) {          // Loop for rows
        for(j = 0; j < 4; j++) {      // Loop for columns
            printf("%d ", a[i][j]);   // Print element
        }
        printf("\n");                 // Move to next row
    }

    return 0;   // End of program
}
