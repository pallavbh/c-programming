#include<stdio.h>
int main(){
    
    char name[10];
    printf("enter your name : ");
    scanf( "%[^/n]", name);
    printf("your entered name is :- %s", name);
    return 0;
}