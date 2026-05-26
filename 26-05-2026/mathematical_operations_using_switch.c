#include<stdio.h>

int main(){

    int num1, num2;
    char op;
    printf("Enter Two number =");
    scanf("%d%d", &num1, &num2);
    printf("\nOperator: ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("operator %d", num1 + num2);
            break;
        case '-':
            printf("operator %d", num1 - num2);
            break;
        case '*':
            printf("operator %d", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("operator %d", num1 / num2);
            } else {
                printf("can not divide by zero");
            }
            break;
        case '%':
            printf("operator %d", num1 % num2);
            break;
        default:
            printf("Invalid operator");
            break;
    }

    return 0;
}
