//accept radius of circle and calculate their area of circle.
#include<stdio.h>
int main(){
	float r,area;
	printf("The radius of the circle is:");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("The area of te circle is:%.2f",area);
	return 0;
}