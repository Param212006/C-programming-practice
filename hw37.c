#include<stdio.h>
int area_circle(float r)
{
    float area=(22/7)*r*r;
    printf("area of circle = %0.2f",area);
}
int main(){
    float r=67;
    area_circle(r);
}