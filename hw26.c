#include<stdio.h>
int main(){
    int ar[3][3]={{1,5,2},{1,2,4},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",ar[i][j]);
        }
        printf("\n");
    }
    int r,c,n;
    printf("enter the row no. you want: ");
    scanf("%d",&r);
    while(r<1 || r>3){
        printf("value you entered was wrong enter again(row value)(1-3): ");
        scanf("%d",&r);
    }
    printf("enter the column no. you want: ");
    scanf("%d",&c);
    while(c<1 || c>3){
        printf("value you entered was wrong enter again(column value)(1-3): ");
        scanf("%d",&c);
    }
    printf("enter the no. you want to insert: ");
    scanf("%d",&n);
    ar[r-1][c-1]=n;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",ar[i][j]);
        }
        printf("\n");
    }

}