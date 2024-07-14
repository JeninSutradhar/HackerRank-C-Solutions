Approach:
Dynamic Memory Allocation:

arr = (int*) malloc(num * sizeof(int)); allocates memory dynamically based on the size num read from input.
Reading Array Elements:

scanf("%d", arr + i); reads num integers into the dynamically allocated array arr.
Reversing the Array:

The for loop for(i = 0; i < num/2; i++) iterates only up to half of the array (num/2 rounds down in integer division).
Within the loop, temp = arr[i]; arr[i] = arr[num-i-1]; arr[num-i-1] = temp; swaps the elements from the beginning and the end of the array, effectively reversing it.
Printing the Reversed Array:

After reversing, another loop for(i = 0; i < num; i++) prints each element of the array in its reversed order.
Memory Deallocation:

free(arr); frees the memory allocated for the array to avoid memory leaks.
Example Execution:
For an input like:

6
16 13 7 2 1 12
The program will reverse the array to [12, 1, 2, 7, 13, 16] and print it accordingly.