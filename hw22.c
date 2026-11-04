//12\. Write a C program to calculate the sum of elements at even and odd indexes separately.
#include<stdio.h>
int main(){
    int ar[]={1,2,3,4,5,6,7};
    int even=0,odd=0;
    int s=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<s;i++){
        if(i%2==0){
            even+=ar[i];
        }
        else{
            odd+=ar[i];
        }
    }
    printf("sum of elements at even indexes: %d\n",even);
    printf("sum of elements at odd indexes: %d\n",odd);
}