#include<stdio.h>
int perimeter_square(float s)
{
    float peri=4*s;
    printf("%0.2f",peri);
}
int main(){
    float side=34;
    perimeter_square(side);
}