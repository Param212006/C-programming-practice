#include<stdio.h>
int main(){
	int x=73;
	int y=93;
	
	if(x>y){
        printf("Larger number is: %d",x);
    }
    else if(y>x){
    	printf("Larger number is: %d",y);
	}
	else{
	    printf("Both number are equal");
    }
}