//accept marks of student m>=90 && m<=100 excellence
//m>=80 && m<=89 very good
//m>=70 && m<=79 good
//m>=60 && m<=69 fair
//else need to improvement
#include<stdio.h>
int main(){
    int m;
    printf("what is you marks :");
    scanf("%d",&m);
    if(m>=90 && m<=100){
        printf("excellence");
    }
    else if(m>=80 && m<=89){
        printf("very good");
    }
    else if(m>=70 && m<=79){
        printf("good");
    }
    else if(m>=60 && m<=69){
        printf("fair");
    }
    else{
        printf("need to improvement");
    }
    return 0;
}