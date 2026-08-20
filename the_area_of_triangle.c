//accept the base and height of the triangle and calculate their area.
#include<stdio.h>
int main(){
	float b,h,area;
	printf("The base of the triangle:");
	scanf("%f",&b);
	printf("The height of the triangle:");
	scanf("%f",&h);
	area=(b*h)/2;
	printf("The area of the triangle:%.2f",area);
	return 0;
}