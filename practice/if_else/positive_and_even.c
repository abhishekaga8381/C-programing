#include <stdio.h>

int main(){

    int n;

    printf("Enter a number :");
    scanf("%d", &n);

    if (n>0 && n%2 == 0){
        printf("The number is positive and even");
    }
    else if (n<0 && n%2 == 0){
        printf("The number is negative and even");
    }
    else {
        printf("The number is zero or odd");
    }


}