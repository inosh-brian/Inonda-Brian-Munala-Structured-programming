#include <stdio.h>

int main() {
    int n, i, j;
    int a[50];

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    // Check each element
    printf("Unique elements are: ");
    for(i = 0; i < n; i++) {
        int unique = 1;   // Assume element is unique

        for(j = 0; j < n; j++) {
            // If same element appears again
            if(i != j && a[i] == a[j]) {
                unique = 0;
                break;
            }
        }

        // Print only unique elements
        if(unique)
            printf("%d ", a[i]);
    }

    return 0;
}
