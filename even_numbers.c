#include<stdio.h>
int main(){
	int a,c;
	printf("give a number:");
	scanf("%d",&a);
	for(int i=1;i<=10;i++){
		c=i*a;
		printf("%d X %d = %d \n",a,i,c);
	}
	return 0;
	
	
}