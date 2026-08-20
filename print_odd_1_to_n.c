// To print odd integers from 1 to n(where n is user given input)
// Loop:
#include<stdio.h>
int main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	for(int i=1;i<=n;i=i+2){
		printf("%d ",i);
	}
	
	return 0;
}

// write a programn to print the multipication table of n(where n will be given by user)