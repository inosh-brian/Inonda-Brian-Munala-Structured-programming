#include <stdio.h>

int main() {
    int n, i;
    int a[50];   // Declare array to store elements

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read elements into array
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    // Display array in normal order
    printf("Array elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Display array in reverse order
    printf("\nReverse order: ");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;   // End of program
}
