// Comparison Functions:
// lexicographic_sort: Uses strcmp to compare strings lexicographically.
// lexicographic_sort_reverse: Compares strings in reverse lexicographical order.
// sort_by_number_of_distinct_characters: Counts distinct characters using an array and compares based on the count.
// sort_by_length: Uses strlen to compare strings by length.

// Sorting Function (string_sort):
// Accepts an array of strings (arr), the number of strings (cnt), and a function pointer (cmp_func) to specify the comparison strategy.
// Uses a simple bubble sort algorithm for simplicity, but can be replaced with more efficient sorting algorithms like quicksort or mergesort for larger inputs.

// Main Function:
// Demonstrates how to use string_sort with different comparison functions (lexicographic_sort, lexicographic_sort_reverse, sort_by_number_of_distinct_characters, sort_by_length).
// Prints the sorted array of strings for each sorting strategy.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Utility function to count distinct characters in a string
int count_distinct_characters(const char *str) {
    int seen[26] = {0};
    int distinct_count = 0;
    
    while (*str != '\0') {
        if (!seen[*str - 'a']) {
            seen[*str - 'a'] = 1;
            distinct_count++;
        }
        str++;
    }
    
    return distinct_count;
}

// Comparison function to sort strings lexicographically non-decreasing order
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

// Comparison function to sort strings lexicographically non-increasing order
int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

// Comparison function to sort strings by number of distinct characters, then lexicographically
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int dist_a = count_distinct_characters(a);
    int dist_b = count_distinct_characters(b);
    
    if (dist_a == dist_b) {
        return strcmp(a, b);
    } else {
        return dist_a - dist_b;
    }
}

// Comparison function to sort strings by length, then lexicographically
int sort_by_length(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    
    if (len_a == len_b) {
        return strcmp(a, b);
    } else {
        return len_a - len_b;
    }
}

// Sorting function that accepts a comparison function pointer
void string_sort(const char **arr, const int cnt, int (*cmp_func)(const char* a, const char* b)) {
    // Using bubble sort for simplicity, can be replaced with more efficient sorting algorithms
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = 0; j < cnt - i - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                // Swap
                const char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}