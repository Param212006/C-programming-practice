//table of n from upto n*10
#include<stdio.h>
int main(){
    int n,i,k;
    printf("Enter a number :");
    scanf("%d",&n);
    i=1;
    while (n*i<=n*10)
    {
        printf("\n%dX%d=%d",n,i,n*i);
        i++;
    }
    
}