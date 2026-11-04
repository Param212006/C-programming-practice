//passing array to the function
#include<stdio.h>
void display(int[],int);
int main(){
    int ar[]={33,22,55,44,66,77,88};
    int size=sizeof(ar)/sizeof(ar[0]);

    display(ar,size);
}
void display(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}