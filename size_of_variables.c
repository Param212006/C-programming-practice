//calculating size of data type
#include<stdio.h>
int main(){
	int a=sizeof(char);
	int b=sizeof(int);
	int c=sizeof(float);
	int d=sizeof(double);
	int e=sizeof(long);
	int f=sizeof(long double);
	
	printf("\n size of char is : %d",a);
	printf("\n size of int is : %d",b);
	printf("\n size of float is : %d",c);
	printf("\n size of double is : %d",d);
	printf("\n size of long is : %d",e);
	printf("\n size of long double is : %d",f);
	
	return 0;
}