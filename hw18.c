#include<stdio.h>
int main(){
    int x,y,n;
    do{
        printf("Enter 1st number: ");
        scanf("%d",&x);
        printf("Enter 2nd number: ");
        scanf("%d",&y);
        printf("\n\n-------Menu List--------\n\n");
        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multipication");
        printf("\n 4. Divison");
        printf("\n  Exit(enter any key) \n");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("\n Addition is: %d \n",(x+y));
            break;
            case 2:
            printf("\n Subtraction is: %d \n",(x-y));
            break;
            case 3:
            printf("\n Multipication is: %d \n",(x*y));
            break;
            case 4:
            printf("\n Divison is: %d \n",(x/y));
            break;
            default:
            printf("Enter a valid number 1-4 :");
        }
    }while(n>=1 && n<=4);
}