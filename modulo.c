#include<stdio.h>
int main(){
	int a,b,quotient,remainder;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	quotient = a/b;
	remainder = a%b;// % is known as modulo(remainder) operator
	printf("%d divide by %d gives:\n",a,b);
	printf("quotinet = %d\n",quotient);
	printf("remainder = %d\n",remainder);
	
	return 0;
	
}