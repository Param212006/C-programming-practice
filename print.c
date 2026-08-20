// To print integers from n to 1(where n is user given input)
// Loop:
#include<stdio.h>
int main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	for(int i=n;i>=1;i=i-1){
		printf("%d ",i);
	}
	
	return 0;
}