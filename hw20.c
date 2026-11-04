//1\. Write a C program to declare an integer array of 5 elements and display all elements.
#include<stdio.h>
int main(){
    int arr[5];//declaring an integer array of 5 elements
    //initializing the array elements
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    //displaying all elements of the array
    printf("Elements of the array are:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}