//its negative ,its positive no. or its zero
#include<stdio.h>
int main(){
	int x;
	printf("Enter number : ");
	scanf("%d",&x);
	
	if(x>0){
		printf("It's positiive number");
	}
	else if(0>x){
		printf("It's negative number");
	}
	else{
		printf("It's zero");
	}
	
}