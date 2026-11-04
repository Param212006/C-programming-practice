//take no. of legs and heads in a pultry farm
//now you are required to find total number of hens and goats in the pultry farm
#include<stdio.h>
int main(){
    int head, leg, goat, hen;
    printf("Enter the number of heads :");
    scanf("%d",&head);
    printf("Enter the number of legs :");
    scanf("%d",&leg);
    goat = (leg - 2 * head) / 2;
    hen = head - goat;
    if(leg)
    printf("Total number of hens in the pultry farm : %d\n", hen);
    printf("Total number of goats in the pultry farm : %d\n", goat);
    return 0;
}