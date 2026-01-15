#include <stdio.h>

int main() {
    int n, i, pos, value;
    int a[50];

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    // Input value and position
    printf("Enter value to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &pos);

    // Shift elements to create space
    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    // Insert new value
    a[pos - 1] = value;
    n++;

    // Display new array
    printf("New array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
