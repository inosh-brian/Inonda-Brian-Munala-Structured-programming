#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int a[50];   // Array declaration

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read elements and add them
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
        sum = sum + a[i];   // Add each element to sum
    }

    // Display sum
    printf("Sum of elements = %d", sum);

    return 0;
}
