#include<stdio.h>
int circumfrance_circle(float r)
{
    float circum=(22/7)*r*2;
    printf("%0.2f",circum);
}
int main(){
    float r=33;
    circumfrance_circle(r);
}