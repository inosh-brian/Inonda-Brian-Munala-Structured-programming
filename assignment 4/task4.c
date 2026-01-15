#include <stdio.h>

int main() {
    int n, i;
    int a[50];
    int max, min;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read elements
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    // Initialize max and min with first element
    max = min = a[0];

    // Find max and min
    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    // Display results
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
