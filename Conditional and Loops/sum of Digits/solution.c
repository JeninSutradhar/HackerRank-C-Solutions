#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Steps :
// Read the Integer from Input
// Extract each digit from the Integer
// Sum the extracted digits
// Print the sum


int main() {
	
    int n;
    int sum = 0;
    
    scanf("%d", &n);
    
    // Ensure the number is a five digit Number
    if (n < 10000 || n > 99999) {
        printf("Error, the number must be a five-digit number");
        return 1;
    }
    
    // Calculate the sum of digits
    while (n != 0) {
        // Add the last digit to the sum
        sum = sum + n % 10;
        
        // Remove the last digit
        n /= 10;
    }
    
    printf("%d\n", sum);
    
    return 0;
}