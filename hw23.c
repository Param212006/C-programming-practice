#include<stdio.h>
int main(){
    int t;
    int ar[]={4,3,6,5,7,8,5,4};
    int s=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i;j++){
            if(ar[j]>ar[j+1]){//4>3
                t=ar[j];//t=4
                ar[j]=ar[j+1];//ar[0]=3
                ar[j+1]=t;//ar[1]=4
            }
        }
    }
    for(int i=0;i<s;i++){
        printf(" %d",ar[i]);
    }
}