#include<stdio.h>
int main(){
    char str1[100]="Hello";
    char str2[100]=" World";
    int i=0,j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("%s",str1);
    return 0;
}