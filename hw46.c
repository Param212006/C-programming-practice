#include<stdio.h>
float area(float s){
    float ar=s*s;
    return ar;
}
int main(){
    int side=34;
    printf("%0.2f",area(side));
}