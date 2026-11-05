#include<stdio.h>
int area_rohumbus(float x,float y)
{
    float area=(x*y)/2;
    printf("area of rohumbus = %0.2f",area);
}
int main(){
    float k=3,l=7;
    area_rohumbus(k,l);
}