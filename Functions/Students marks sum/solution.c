#include<stdio.h>

// array of marks (marks[])
// the number of students (number_of_student)
// gender 'g' or 'b' (char gender)
int marks_summation(int marks[], int number_of_students, char gender) {
    int sum = 0;
    
    if (gender == 'b') {
        // Sum up marks of boys (indices 0, 2, 4, ...)
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else if (gender == 'g') {
        // Sum up marks of girls (indices 1, 3, 5, ...)
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    
    return sum;
}

int main() {
    int number_of_students;
    scanf("%d", &number_of_students);
    
    int marks[number_of_students];
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }
    
    char gender;
    scanf(" %c", &gender); 
    
    int result = marks_summation(marks, number_of_students, gender);
    printf("%d\n", result);
    
    return 0;
}