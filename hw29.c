#include<stdio.h>
int main(){
    int x=12;
    int *p1,**p2,***p3;
    p1=&x;
    p2=&p1;
    p3=&p2;
    printf(" x= %d",x);//value of x
    printf("\n address of x using pointer= %d",p1);//adress of x
    printf("\n value at x using pointer= %d",*p1);//value at adress p1
    printf("\n adress of p1 using pointer to pointer= %d",p2);//p2 adress of p1
    printf("\n value of p1 using pointer to pointer= %d",*p2);//value at p2 adress of p1
    printf("\n value of x using pointer to pointer= %d",**p2);//value at p1 adress of x
    printf("\n adress of p2= %d",&p2);
    printf("\n adress of p2= %d",p3);//adress of p2
    printf("\n value of x using pointer to pointer= %d",***p3);
}