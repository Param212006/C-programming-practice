//  vote or not

#include<stdio.h>
int main(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18){
		printf("Yes , you can vote");
	}
	else{
		printf("No, you can not vote now\n");
		printf("you can vote after %d years", 18-age);
	}
	
	return 0;
}