#include <stdio.h>

int main() {
    int n, i, j, temp;
    int a[50];

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    // Sort array using simple swapping
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
