#include <stdio.h>

int main(){

    int number;

    printf("Enter any number :");
    scanf("%d", &number);

    switch (number%2) {

        case 0:
        printf("number is even");
        break;

        default:
        printf("number is odd");

    }
    return 0;
}