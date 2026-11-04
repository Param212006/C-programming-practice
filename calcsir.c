#include<stdio.h>//
int main(){
    int n, x, y;
    printf("1=add\n2=minus\n3=multiply\n4=divide\n");
    printf("Enter number b/w 1-4 :");
    scanf("%d",&n);
    printf("Enter first number :");
    scanf("%d",&x);
    printf("Enter 2nd number :");
    scanf("%d",&y);
    switch (n){
        case 1:
            printf("add=%d",x+y);
            break;
        case 2:
            printf("subtract=%d",x-y);
            break;
        case 3:
            printf("multipication=%d",x*y);
            break;
        case 4:
            printf("divison=%d",x/y);
            break;
        default:
            printf("invalid number");
            break;

    }
}