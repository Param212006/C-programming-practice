#include<stdio.h>
int main(){
	int x,y,z;
	
	printf("Enter first number: ");
	scanf("%d",&x);
	
	printf("Enter second number: ");
	scanf("%d",&y);
	
	printf("Enter third number: ");
	scanf("%d",&z);
	
	int m=x>y ? (x>z ? x:z):(y>z ? y:z);
	printf("greater number is: %d",m);
	
}