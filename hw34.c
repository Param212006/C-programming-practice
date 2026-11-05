#include<stdio.h>
int x=10;
void display()
{
    int x=20;
    printf("%d ",x);//1
}
int main(){
    int x=30;
    display();
    printf("%d ",x);//2
    printf("%d ",x+10);//3
}