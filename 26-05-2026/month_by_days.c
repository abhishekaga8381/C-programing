#include<stdio.h>

int main(){

    int ch;
    printf("Enter no. of months (1-12): ");
    scanf("%d", &ch);


    switch(ch) {
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Month with 30 days");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Month with 31 days");
            break;
        case (2):
            printf("Month with 28 or 29 days");
            break;
        default:
            printf("Invalid number of days");
    }

}