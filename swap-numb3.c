//swap numbers using third variable
#include <stdio.h>  
int main(){    
    int x,y;
    printf("enter value of x: ");
    scanf("%d",&x);
    printf("enter value of y: ");   
    scanf("%d",&y);

    
    x=x+y;
    y=x-y;
    x=x-y;

    printf("\nx=%d",x);
    printf("\ny=%d",y);
}