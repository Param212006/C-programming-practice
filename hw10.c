//power
#include<stdio.h>
int main(){
    int n,p,o;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&p);
    o=n;
    while(p>1){
        n=n*o;
        p--;
    }
    printf("%d",n);
}