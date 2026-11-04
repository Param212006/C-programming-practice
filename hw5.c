//table of 5 n=5
#include<stdio.h>
int main(){
    int n,i,mult;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mult=n*i;
        printf("%dX%d=%d \n",n,i,mult);
    }
    

}