#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Declare 4 variables 
    // Two Integers
    int int1, int2;
    //  Two Floats
    float float1, float2;
    
    // Reading the two Integers
    scanf("%d %d", &int1, &int2);

    // Reading the Two Floating Point Numbers
    scanf("%f %f", &float1, &float2);
    
    // Operations and Calculations [Sum and Difference]
    
    // Integers
    int int_sum = int1 + int2;
    int int_diff = int1 - int2;
    
    // Floating Point Numebrs
    float float_sum = float1 + float2;
    float float_diff = float1 - float2;
    
    // Printing the Operations
    printf("%d %d\n", int_sum, int_diff);
    printf("%.1f %.1f\n", float_sum, float_diff);
}