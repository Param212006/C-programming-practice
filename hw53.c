#include<stdio.h>
//compare two strings without pre defined function
int main(){
    char str1[100]="Hello World";
    char str2[100]="Hello Worl";
    int i=0,flag=0;
    while(str1[i]!='\0' || str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("its same word");
    }
    else{
        printf("its not same word");
    }
    return 0;
}