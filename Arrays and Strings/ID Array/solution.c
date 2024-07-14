// Steps
// Variable 'n' to store the size of array
// Input the size of array
// Dynamically allocate memory
// Read array elements
// Calculate the sum of array elements
// Print Output
// Free the Dynamically allocated memory

#include "stdio.h"
#include "stdlib.h"

int main() {
    int n;
    
    // Read the size of the Array
    scanf("%d", &n);

    // Dynamically allocate memory
    int *arr = (int *)malloc(n * sizeof(int));

    // Reading array Elements
    // We use a loop to read 'n' integers into the array 'arr' using 'scanf()'
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the Sum of Array 'arr'
    // Variable to Store sum
    int sum = 0;
    // Loop to Add all elements
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // Print the sum
    printf("%d", sum);

    // FREE THE DYNAMICALLY ALLOCATED MEMORY
    free(arr);

    return 0;
}