// WAP  to print Hello World! <Your Name>

#include<stdio.h>

int main(){
    //Declare a character array
    char name[100];
    //Prompt the user to type name
    printf("Enter Your Name: ");

    //"%[^\n]" allows name with example
    //scanf read input from keyboard
    scanf("%[^\n]", name);

    //print name with hello world!
    printf("Hello World! %s\n", name);


    return 0;
}