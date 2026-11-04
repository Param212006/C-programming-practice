#include<stdio.h>
int main(){
    int i,j;
    char x=65;
    for(i=1; i<=5; i++){
        for(j=1; j<=9; j++){
            if(j>=6-i && j<=4+i){
                printf("%c",x);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        x++;
    }
}