// The task is to implement a function `void update(int *a, int *b)` that modifies the values
// of thwo Integers using Pointers

// The Function Should => 
// 1. Set the value pointed to by `a` to the sum of the values originally pointed to by `a` and `b`
// 2. Set the value pointed to by `b` to the absolute difference of the original values pointed to by `a` and `b`

#include<stdio.h>
#include<stdlib.h> // For `abs()` function

void update(int *a, int *b);

int main() {
    // Declare two integers a and b
    int a, b;

    // Read two numbers from the Standard Input 
    scanf("%d %d", &a, &b);

    // Call the update Function with the address of a and b
    // This allows the function to modify the actual values of a and b
    update(&a, &b);

    // Print the Modified Value
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a, int *b) {
    // *a and *b derefrence the pointers to access the values they point to
    // Add the value of *b to *a and Store the result in *a
    *a = *a + *b;

    // Calculate the absolute difference and store it in *b
    // The Formula (*a - 2 * (*b)) esure that we use the original value of *b
    // because the *a has already been modified in the previous step 
    *b = abs(*a - 2 * (*b));
}