//90-100>A,80-89-b,70-79-c,60-69-d,below 60-f

#include<stdio.h>
int main(){
    int marks;
    printf("90-100>A \n80-89>B \n70-79>C \n60-69>D \nBelow 60>F");
    printf("\n\nEnter your marks :");
    scanf("%d",&marks);
    if(marks<0 || marks>100){
        printf("Impossible marks !");
        return 1;
    }
    switch(marks/10){
        case 10:
        case 9:
        printf("Grade A");
        break;
        case 8:
        printf("Grade B");
        break;
        case 7:
        printf("Grade C");
        break;
        case 6:
        printf("Grade D");
        break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        printf("Fail !");
        break;
       
    }
}