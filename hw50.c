#include<stdio.h>
#include<string.h>
int main(){
    char name1[50];
    char name2[50];
    puts("enter name :");//printf("enter name :");
    fgets(name1,sizeof(name1),stdin);//scanf("%s",name1);
    puts(name1);//printf("%s",name1);
    int len=strlen(name1);
    puts(len);

}