#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    // Array of words for numbers 1 to 9
    char* numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            printf("%s\n", numbers[n - 1]);
        } else if (n > 9) {
            if (n % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
