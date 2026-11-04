//swap numbers using third variable
#include <stdio.h>
int main(){
    int x,y,t;
    printf("enter value of x: ");
    scanf("%d",&x);
    printf("enter value of y: ");
    scanf("%d",&y);
    
    t=x;
    x=y;
    y=t;
    printf("x=%d\ny=%d",x,y);
    

    return 0;
    
}