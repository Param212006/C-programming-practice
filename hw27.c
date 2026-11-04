#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no. of rows you want :");
    scanf("%d",&r);
    printf("Enter the no. of columns you want :");
    scanf("%d",&c);
    int ar[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the no. you want to insert :");
            scanf(" %d",&ar[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" %d",ar[i][j]);
        }
        printf("\n");
    }
}