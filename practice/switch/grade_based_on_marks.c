#include <stdio.h>

int main(){

    int num;

    printf("Enter any number");
    scanf("%d", &num);

    if (num = 100 && num>90)
    num = 1;
    else if (num = 89 && num>70)
    num = 2;
    else 
    num = 3;

    switch (num){

        case 1:
        printf("grade A");
        break;

        case 2: 
        printf("grade B");
        break;

        case 3:
        printf("grade C");
        break;
        
        default:
        printf("fail");
    }
}