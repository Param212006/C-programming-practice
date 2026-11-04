#include<stdio.h>
int main(){
    int r,c,highest,lowest;
    highest=0;
    printf("Enter the number of rows you want in array : ");
    scanf("%d",&r);
    printf("Enter the number of colums you want in array : ");
    scanf("%d",&c);
    int ar[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Insert the number : ");
            scanf("%d",&ar[i][j]);
        }
    }
    lowest=ar[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            if(ar[i][j]>highest){
                highest=ar[i][j];   
            }
            if(ar[i][j]<lowest){
                lowest=ar[i][j];
            }
            printf(" %d",ar[i][j]);
        }
        printf("\n");
    }
    printf("The highest number in array is = %d\n",highest);
    printf("The lowest number in array is = %d\n",lowest);
    return 0;
}