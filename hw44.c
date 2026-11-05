#include<stdio.h>
int area_paralellogram(float b,float h)
{
    float area=b*h;
    printf("area of paralellogram = %0.2f",area);
}
int main(){
    float b=43,h=22;
    area_paralellogram(b,h);
}