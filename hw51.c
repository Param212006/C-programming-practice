#include<stdio.h>
#include<string.h>
//count how many capital letters are there
int main(){
    char name[50];
    puts("enter any string :");
    fgets(name,sizeof(name),stdin);
    int len=strlen(name);
    int i, c=0;
    for(i=0;i<len;i++){
        if(name[i]>='A'&& name[i]<='Z'){
            c++;
        }
    }
    printf("Total character is: %d",c);//free life
}