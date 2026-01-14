#include<stdio.h>
int main(){
    int x;
    printf("Enter a num: ");
    scanf("%d", &x);
    if (x==2)
    {
        printf("even");
    }
    if(x!=2){
        printf("odd");
    
    }
    return 0;
}