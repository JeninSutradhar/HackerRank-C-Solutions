Task Description
Input Format:

The first line contains an integer n. This integer represents the size of the array that we need to dynamically allocate.
The second line contains n space-separated integers. These integers are the elements of the array that we will read into our dynamically allocated array.
Constraints:

There are no explicit constraints given in the task description other than ensuring the input format matches the specified format.
Output Format:

Print a single integer which is the sum of all elements in the array.
Steps to Solve the Task
Dynamic Array Allocation:

Use malloc function to dynamically allocate memory for an array of integers based on the size n read from the input.
Reading Array Elements:

Read n integers from the input and store them in the dynamically allocated array.
Calculating the Sum:

Traverse through the array to compute the sum of all its elements.
Printing the Result:

Output the computed sum as a single integer.
Memory Deallocation:

Use free to release the dynamically allocated memory once it's no longer needed, to avoid memory leaks.
Example Walkthrough
Given the input:

Copy code
6
16 13 7 2 1 12
n is 6, indicating we need to allocate an array of size 6.
Allocate memory for the array arr of size 6 using malloc.
Read and store the integers 16, 13, 7, 2, 1, 12 into the array arr.
Compute the sum: 16 + 13 + 7 + 2 + 1 + 12 = 51.
Print 51 as the output.
Conclusion
The task essentially involves basic operations in C programming:

Dynamic memory allocation (malloc).
Reading input from standard input (scanf).
Iterating through an array to compute a sum.
Printing output (printf).
Properly freeing allocated memory (free).