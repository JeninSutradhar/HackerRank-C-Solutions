// Function Decaration 

// Prototype
// return_type function_name (parameter_type parameter_1, parameter_type parameter_2, ...) {
    // // Function body
    // // Statements to perform the task
    // return value; // If the return type is not void
// }

// Return Type:
// The type of the Value that function Will return 
// If the function does not return a Value, USE `void`

// function name:
// The Name of the Function

// Parameters: (Optional)
// The types and Name of the Values the Function needs to recieve


// Function Call:
// To Execute the Function, You need to call it from another function 
// function_call(arguments);

#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int max(int x, int y);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
        
    return 0;
}

int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int max(int x, int y) {
    return (x > y) ? x : y;
}

/*
* Library Functions: Predefined functions provided by C standard libraries 
    (e.g., printf(), scanf(), strlen()).

* User-Defined Functions: Functions defined by the programmer to perform specific tasks.
*/