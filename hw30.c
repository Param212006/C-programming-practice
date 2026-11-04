#include<stdio.h>
int main(){
    int value=12;
    int *ptr=&value;
    printf("value = %d\n",value);
    printf("value using pointer = %d\n",*ptr);
    *ptr=*ptr+8;
    printf("value = %d\n",value);
}