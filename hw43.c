#include<stdio.h>
int volume_cube(float s)
{
    float volume=s*s*s;
    printf("%0.2f",volume);
}
int main(){
    float side=34;
    volume_cube(side);
}