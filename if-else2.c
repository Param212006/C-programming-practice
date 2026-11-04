#include<stdio.h>
int main(){
	int x,y,z;
	x=73;
	y=93;
	z=100;
	if(x>y && x>z){
        printf("Larger number is: %d",x);
    }
    else if(y>z){
    	printf("Larger number is: %d",y);
	}
	else{
		printf("Larger number is: %d",z);
	}
}