#include<stdio.h>

int main(){

    int num;

    printf("Enter any num");
    scanf("%d", &num);
    
    switch (num<40){

        case 0:
        printf("student pass the exam");
        break;
        
        default:
        printf("fail");

    }
}