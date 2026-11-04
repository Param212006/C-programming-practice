//  vote or not
// 18 plus or less than 100
#include<stdio.h>
int main(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18){
		printf("Yes, you can vote");
	}
	else{
		printf("No, you can not vote now\n");
		printf("You can vote after %d years\n",18-age);
	}
	
	return 0;
}