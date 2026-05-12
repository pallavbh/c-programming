/*#include<stdio.h>
int main(){

    char name[10];
    printf("enter your name : ");
    scanf( "%[^/n]", name);
    printf("your entered name is :- %s", name);
    
    return 0;
}*/

#include <stdio.h>

int main() {
    char grade;

    // Asking the user to input the grade code
    printf("Enter the grade code (A, B, C, D, or F): ");
    scanf(" %c", &grade);

    // Using switch-case to determine the remark
    switch (grade) {
        case 'A':
        case 'a':
            printf("Remark: Excellent\n");
            break;
        case 'B':
        case 'b':
            printf("Remark: Very Good\n");
            break;
        case 'C':
        case 'c':
            printf("Remark: Good\n");
            break;
        case 'D':
        case 'd':
            printf("Remark: Pass\n");
            break;
        case 'F':
        case 'f':
            printf("Remark: Fail\n");
            break;
        default:
            printf("Invalid grade code entered.\n");
    }

    return 0;
}