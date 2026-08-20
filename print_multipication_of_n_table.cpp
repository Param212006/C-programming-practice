// write a programn to print the multipication table of n upto 10
//(where n will be given by user)
// Loop:
#include<stdio.h>
int main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	for(int i=1;i<=10;i=i+1){
		printf("%d X %d = %d\n",n,i,n*i);
	}
	
	return 0;
}


