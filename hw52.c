#include<stdio.h>
//copy one string into another string
int main(){
    char str1[100]="Hello World";
    char str2[100];
    int i=0;
    while(str1[i]!='\0'){
        printf("%c",str1[i]);
        str2[i]=str1[i];
        i++;

    }
    str2[i]='\0';
    printf("\nstr2 = %s",str2);
    return 0;
}