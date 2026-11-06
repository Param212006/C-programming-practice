#include<stdio.h>
int main(){
    char name1[50];
    char name2[50];
    printf("Enter any Name :");
    scanf("%s",&name1);//& is optional in string
    printf("name is : %s",name1);//only the first name kind of is printed and when we take space complier thinks of it as null value and close it so like when i write "geet raj" only geet will print not raj as there is " " space in between ans it is for complier is null value \0.
}