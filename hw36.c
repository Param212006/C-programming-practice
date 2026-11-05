#include<stdio.h>
int area_triangle(float b,float h)
{
    float area=(b*h)/2;
    printf("area of triangle = %0.2f",area);
}
int main(){
    float b=3,h=7;
    area_triangle(b,h);
}