//c program to calculate ticket price after following discount:
//purschase above 5000: 20% discount
//purschase above 2000: 10% discount
//otherwise: no discount
#include <stdio.h>
int main(){
    int price,discount,total;
    printf("Enter the ticket price: ");
    scanf("%d",&price);
    if(price>=5000){
        discount= price * 0.2;
        total=price - discount;
    }
    else if(price>=2000){
        discount = price * 0.1;
        total=price - discount;
        
    }
    else{
        total=price;
    }
    printf("total amount to be paid: %d", total);
    
    return 0;
}