// Solution using Implementing a recursive function that computes the nth term based on initial values (a, b, c)

#include "stdio.h"

int find_the_term(int n, int a, int b, int c) {
    // Base cases (if n = 1, 2, 3)
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    // Recursive case (n < 3)
    // formula = S(n) = S(n - 1) + S(n - 2) + S(n - 3)
    return find_the_term(n - 1, a, b, c) + find_the_term(n - 2, a, b, c) + find_the_term(n - 3, a, b, c);

}

int main() {
    int n;
    int a, b, c;

    // Input 
    scanf("%d %d %d %d", &n, &a, &b, &c);

    int ans = find_the_term(n, a, b, c);

    // Output
    printf("%d\n", ans);

    return 0;
}