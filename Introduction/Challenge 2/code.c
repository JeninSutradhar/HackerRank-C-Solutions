#include "stdio.h"
int main() {
    
    char ch;
    char s[100];
    char sen[100];
    
    // Taking the character Input
    scanf("%c", &ch);
    
    // Consuming the new line character left by the previous Scanf
    scanf("\n");

    // Taking the String Input    
    scanf("%[^\n]%*c", s);
    
    // Consuming the new line character left by the previous scanf
    scanf("\n");
    
    // Taking the Character Input
    scanf("%[^\n]%*c", sen);
    // Program will end after this so there will be no new line consumption
    
    // Print the character
    printf("%c\n", ch);
    
    // Print the First String Input
    printf("%s\n", s);
    
    // Print the second String Input
    printf("%s\n", sen);
    
    return 0;
}