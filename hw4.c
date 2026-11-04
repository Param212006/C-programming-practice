//factorial of 5 if n=5 are given
//5*4*3*2*1
#include<stdio.h>
int main(){
    int i, fact=1, n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=5; i>=1; i--){//i=4
        fact=fact*i;//fact=5*4
    }
    printf("factorial is: %d",fact);
}