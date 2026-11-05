#include<stdio.h>
int area_square(float s)
{
    float area=s*s;
    printf("area of square = %0.2f",area);
}
int main(){
    float side=234;
    area_square(side);
}