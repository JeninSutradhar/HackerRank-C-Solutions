#include "stdio.h"
#include "stdlib.h"

int main() {
    int num;
    int *arr;
    int i;
    int temp;

    scanf("%d", &num);

    // Allocate memory for the Array
    arr = (int *)malloc(num * sizeof(int));

    // read elements of Array
    for (int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    // MAIN LOGIC TO REVERSE THE ARRAY
    for (int i = 0; i < num / 2; i++) {
        // Swap arr[i] with arr[num - i - 1]
        temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }

    // Print the reversed Array
    for (int i = 0; i < num; i++) {
        printf("%d", arr[i]);
    }

    free(arr);
    return 0;
}