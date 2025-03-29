#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Read the number of elements
    scanf("%d", &n);

    // Check if the input size is valid (positive integer)
    if (n <= 0) {
        printf("Invalid input. Array size must be a positive integer.\n");
        return 0;  // Exit program
    }

    int arr[n]; // Declare array of size 'n'

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble Sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Swap if out of order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
