#include<stdio.h>
int main(){
    int n;
    float r,area,l,b,s,height,base;
    printf("\n1 for area of Circle");
    printf("\n2 for area of Rectangle");
    printf("\n3 for area of Square");
    printf("\n4 for area of Triangle");
    printf("\n\nEnter your choie :");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Enter radius of Circle :");
        scanf("%f",&r);
        area=3.14*r*r;
        printf("area of circle is :%f",area);
        break;

        case 2:
        printf("enter length of rectange :");
        scanf("%f",&l);
        printf("Enter breadth of rectangle :");
        scanf("%f",&b);
        area=l*b;
        printf("area of rectangle is :%f",area);
        break;

        case 3:
        printf("Enter any side of square :");
        scanf("%f",&s);
        area=s*s;
        printf("area of square is :%f",area);
        break;

        case 4:
        printf("Enter height of triangle :");
        scanf("%f",&height);
        printf("Enter base of triangle :");
        scanf("%f",&base);
        area=0.5*base*height;
        printf("area of triangle is :%f",area);
        break;

        default:
        printf("invalid number");
        break;




        
    }

}