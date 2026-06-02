#include <stdio.h>

int main(){

    int a,b,c, num;

    printf("Enter any number :");
    scanf("%d%d%d", &a,&b,&c);

    if (a>=b && a>=c)
        num = 1;

    else if (b>=a && b>=c)
        num = 2;

    else 
        num = 3;

    switch (num){

        case 1:
        printf("a is greater");
        break;

        case 2:
        printf("b is greater");
        break;

        case 3:
        printf("c is greater");
        break;

        default:
        printf("default ans");
    }
}