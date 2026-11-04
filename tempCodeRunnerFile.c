//highest digit
#include<stdio.h>
int main(){
    int i,n,highest;
    highest=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while (n>0){
        i=n%10;
        n=n/10;
        if(i>highest){
            highest=i;
        }
    }
    printf("highest digit: %d",highest);
}