#include<stdio.h>
int calculator(int x)
{
    return x++ + ++x;
}
int main(){
    int a=5;
    printf("%d",calculator(a));
}
