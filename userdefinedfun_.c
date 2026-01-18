#include<stdio.h>
float add(float, float); // prototype

float main(){

    float result; 
    // function call
    result = add(10, 560);
    printf("sum = %.5lf", result);
    return 0;
}
//definitation
float add(float a, float b){
    return a + b;
}