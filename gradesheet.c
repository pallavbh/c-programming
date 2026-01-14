#include <stdio.h>

int main() {
    // Declare variables for marks of five subjects, total marks, percentage, and grade
    int sub1, sub2, sub3, sub4, sub5, total_marks;
    float percentage;
    char grade;

    // Prompt user to enter marks for all five subjects
    printf("Enter marks for Maths (out of 100): ");
    scanf("%d", &sub1);
    printf("Enter marks for C-Programming (out of 100): ");
    scanf("%d", &sub2);
    printf("Enter marks for Digital logic (out of 100): ");
    scanf("%d", &sub3);
    printf("Enter marks for CSC (out of 100): ");
    scanf("%d", &sub4);
    printf("Enter marks for English (out of 100): ");
    scanf("%d", &sub5);

    // Calculate total marks (assuming each subject is out of 100)
    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;

    // Calculate percentage
    percentage = (total_marks / 500.0) * 100; // Use 500.0 for float division

    // Determine the grade using if-else if ladder
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Print the final grade sheet
    printf("\n--- Grade Sheet ---\n");
    printf("Maths Marks: %d\n", sub1);
    printf("C-Programming Marks: %d\n", sub2);
    printf("Digital logic Marks: %d\n", sub3);
    printf("CSC Marks: %d\n", sub4);
    printf("English Marks: %d\n", sub5);
    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("-------------------\n");

    return 0;
}
