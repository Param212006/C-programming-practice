//reverse digit
#include<stdio.h>
int main(){
    int i,n,rev;
    rev=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while (n>0){
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    printf("reverse digit: %d",rev);
}