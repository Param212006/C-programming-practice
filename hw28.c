#include<stdio.h>
int main(){
    int x=12;
    int *ptr;
    ptr=&x;//&x=adress of x|| refrence of x
    printf(" x= %d",x);
    printf("\n adress of x using pointer= %d",ptr);
    printf("\n adress of x= %d",&x);
    printf("\n value of x using pointer= %d",*ptr);//*ptr=value at adress
}