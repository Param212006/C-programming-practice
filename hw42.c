#include<stdio.h>
int peri_rectangle(float b,float h)
{
    float prei=(b+h)*2;
    printf("%0.2f",prei);
}
int main(){
    float b=23,h=43;
    peri_rectangle(b,h);
}