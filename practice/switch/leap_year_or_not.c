#include <stdio.h>

int main(){

    int num;

    printf("Enter days in month");
    scanf("%d", &num);

    switch (num){

        case 28: case 30: case 31:
        printf("year is nor a leap year");
        break;

        case 29:
        printf("year is a leap year");
        break;

        default:
        printf("default ans");
    }
}