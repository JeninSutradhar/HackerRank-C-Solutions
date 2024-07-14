To solve this problem, we need to calculate the sum of marks based on whether the input specifies 'b' (for boys) or 'g' (for girls). Here's a step-by-step approach to implement the solution in C:

Read Input: First, we read the number of students and their respective marks into an array.
Determine Gender: Check if the gender is 'b' or 'g'.
Calculate Sum: Depending on the gender:
If 'b', sum the marks at even indices (0-based indexing: 0, 2, 4, ...).
If 'g', sum the marks at odd indices (0-based indexing: 1, 3, 5, ...).
Output the Result: Print the computed sum.