#include <stdio.h>

int main(){

    int ch;

    printf("Enter any number");
    scanf("%d", &ch);


    switch((ch>0)-(ch<0)){

        case 1 :
        printf("number is positive %d", ch);
            break;

        case -1:
            printf("number is negative %d", ch);
            break;

        case 0:
            printf("number is zero %d", ch);
            break;

        default :
            printf("default answer");

    }

    }