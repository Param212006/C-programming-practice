//swap numbers using third variable
#include <stdio.h>
int main(){
    int x,y,t;
    x=10;
    y=15;
    t=x;
    x=y;
    y=t;
    printf("x=%d,\ny=%d",x,y);

    return 0;
    
}