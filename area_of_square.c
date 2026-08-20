#include<stdio.h>
int main(){
	float s,area;
	printf("The side of the square:");
	scanf("%f",&s);
	area=s*s;
	printf("The area of square:%.2f",area);
	return 0;
}