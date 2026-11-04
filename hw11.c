//prime number check
#include<stdio.h>
int main(){
    int n,i,flag;
    flag=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++){//n/2 cause no. is not divisible after half except itself
        if(n%i==0){
            flag=1;
            break;//better efficiency for computer as after a number gets divisible loop stops as it is not prime number
        }
    }
    if(flag==0){
        printf("It is prime number");
    }
    else{
        printf("It is not prime number");
    }
}

//dispaly all factor number from 1-50
//accept number from user and check it is armstrong number or not
//--n=153   1+125+27(1**1,5**5,3**3)=153