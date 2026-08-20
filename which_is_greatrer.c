//take two numbers from user and check which number is greater between them

#include<stdio.h>
int main(){
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	if(a>b){
		printf("%d is greater than %d\n",a,b);
		printf("%d > %d\n",a,b);
		printf("It is greater by %d",a-b);
	}
	else if(a==b){
		printf("Both number are equal\n");
		printf("%d = %d",a,b);
	}
	else{
		printf("%d is greater than %d\n",b,a);
		printf("%d > %d\n",b,a);
		printf("It is greater by %d",b-a);
	
	}
	
	return 0;
}