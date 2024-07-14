#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    // Define a string with a reasonalbe length
    char num[1000];
    // Initialize all frequencies to 0
    int digit_count[10] = {0};

    // Read the Input String
    scanf("%s", num);

    // Calculate the frequency of each digit 
    // The for loop iterates over each character in the string
    for (int i = 0; i < strlen(num); i++) {
        // Check if the character is a digit 
        if (num[i] >= '0' && num[i] <= 9) {
            // Convert char to corresponding digit(by subtracting 0)and INCREMENT++
            digit_count[num[i] - '0']++;
        }
    }

    // Print the frequencies
    for (int i = 0; i < 10; i++) {
        printf("%d", digit_count[i]);
    }

    return 0;
}