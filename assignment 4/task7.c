#include <stdio.h>

#define SIZE 5   // Fixed buffer size

int main() {
    int buffer[SIZE];
    int index = 0;
    int i, value;

    // Initialize buffer values to zero
    for(i = 0; i < SIZE; i++)
        buffer[i] = 0;

    // Input values (more than SIZE to show overwrite)
    printf("Enter %d values:\n", SIZE + 2);

    for(i = 0; i < SIZE + 2; i++) {
        scanf("%d", &value);
        buffer[index] = value;      // Store value
        index = (index + 1) % SIZE; // Circular movement
    }

    // Display buffer contents
    printf("Stored values: ");
    for(i = 0; i < SIZE; i++)
        printf("%d ", buffer[i]);

    return 0;
}
