//sum of digit 
#include<stdio.h>
int main(){
    int i,n,sum;
    sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while (n>0){
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("sum of number is: %d",sum);
}