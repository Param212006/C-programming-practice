//calculate Simple Interest- si=(p*r*t)/100
#include<stdio.h>
int main(){
	float p,r,t,si;
	printf("What is the principal amount :");
	scanf("%f",&p);
	
	printf("What is the interest rate :");
	scanf("%f",&r);
	
	printf("What is the time :");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("The simple interest : %.2f",si);
	
	return 0;
}