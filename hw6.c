//tell number digit 1234 m=4
#include<stdio.h>
int main(){
    int i,n;
    i=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while (n>0){
        n=n/10;
        i++;
    }
    printf("total digit in no. is:%d",i);
}