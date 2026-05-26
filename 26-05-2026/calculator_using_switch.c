#include <stdio.h>

int main(){

    printf("Enter two numbers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Select an operation:");
    printf("\n1. Addition, \n2.Subtraction, \n3.multiplicatio, \n4.divison");
    int ch;
    scanf("%d", &ch);

    switch(ch) {

        case 1 : 
        printf("Addition %d", num1+num2); 
        break;

         case 2 : 
        printf("subtraction %d", num1-num2); 
        break;

         case 3 : 
        printf("multiplicatio %d", num1*num2); 
        break;

         case 4 : {
            if (num2 != 0 ){
        printf("division %d", num1/num2); 
        } else {
            printf("can not devide by zero");
        }
        break;

        default :
        printf("default result");


    }
}
}