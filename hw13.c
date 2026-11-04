//palindrom
#include<stdio.h>
int main(){
    int i,n,sum,o;
    sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    o=n;
    while (n>0){
        i=n%10;
        sum=sum*10+i;
        n=n/10;
    }
    if(o==sum){
        printf("number is palindrom");
    }
    else{
        printf("it is not a palindrom");
    }
}