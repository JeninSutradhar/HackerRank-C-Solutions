Breaking Down the Problem:
Input: A string that may contain both letters and digits.
Output: The count of each digit (from 0 to 9) in the string, printed in a specific format.
Example to Illustrate:
Let's say you have the input string a11472o5t6.

Identify Digits in the String:

The string contains the digits: 1, 1, 4, 7, 2, 5, 6.
Count Each Digit:

0 occurs 0 times.
1 occurs 2 times.
2 occurs 1 time.
3 occurs 0 times.
4 occurs 1 time.
5 occurs 1 time.
6 occurs 1 time.
7 occurs 1 time.
8 occurs 0 times.
9 occurs 0 times.
Output the Frequencies:

The output should be: 0 2 1 0 1 1 1 1 0 0.

What is Asked in the Question:
The task requires you to determine the frequency of each digit (0-9) in a given string that contains both alphabets and digits.

Input Format:
The input consists of a single line containing a string num.
The string can include both English alphabets and digits.
Output Format:
The output should be ten space-separated integers representing the frequency of each digit from 0 to 9 in the input string.
Constraints:
The length of the string is not specified but should be reasonable for processing in a competitive programming context.
Examples:
Example 1:
Input:

a11472o5t6
Output:

0 2 1 0 1 1 1 1 0 0
Explanation:

In the given string a11472o5t6:
1 occurs twice.
4, 7, 2, 5, and 6 occur once each.
The remaining digits (0, 3, 8, 9) do not appear.
Example 2:
Input:

lw4n88j12n1
Output:

0 2 1 0 1 0 0 0 2 0
Concept Behind the Solution:
Initialization:

Create an array to hold the count of each digit (0-9). This array will have 10 elements, all initialized to zero.
Reading the Input:

Read the input string.
Iterating Through the String:

For each character in the string:
Check if it is a digit.
If it is a digit, convert the character to its corresponding integer value and increment the respective position in the frequency array.
Printing the Frequencies:

Print the values in the frequency array, which represent the count of each digit from 0 to 9.
