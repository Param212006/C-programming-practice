//swap numbers using third variable
#include <stdio.h>  
int main(){  
    int x,y;
    
    x=12;
    y=10;
    
    x=x+y;//x=22
    y=x-y;//y=12
    x=x-y;//x=10

    printf("\nx=%d",x);
    printf("\ny=%d",y);
}