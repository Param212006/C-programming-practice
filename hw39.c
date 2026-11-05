#include<stdio.h>
int area_rectangle(float b,float h)
{
    float area=b*h;
    printf("area of rectangle = %0.2f",area);
}
int main(){
    float b=43,h=22;
    area_rectangle(b,h);
}