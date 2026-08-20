#include<stdio.h>
int main(){
	//ternary operator : ?
	int x=15;
	int y=34;
	int z=45;
	
	int m= x>y ? (x>z ? x:z):(y>z ? y:z);
		
	printf("Larger number is: %d",m);
}