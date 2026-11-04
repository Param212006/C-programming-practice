#include<stdio.h>
int main(){
    int ar[]={22,44,35,44,33,55,66};
    int s=sizeof(ar)/sizeof(ar[0]);//to calculate how many elements are there in the array we use this formula
    int p,n;
    printf("i have total of %d elements in the array\n",s);
    for(int i=0;i<s;i++){
        printf(" %d",ar[i]);
    }
    printf("\nenter the position of the element you want to access: ");
    scanf("%d",&p);//p=2
    printf("enter a element: ");
    scanf("%d",&n);//n=100
    ar[p-1]=n;
    for(int i=0;i<s;i++){
        printf(" %d",ar[i]);
    }
}