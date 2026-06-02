#include <stdio.h>

int main(){

    int num;

    printf("Enter any number");
    scanf("%d", &num);

    switch (num%5){

        case 0:
        printf("number is divisible by 5");
        break;

        default:
        printf("default ans");
    }
}