#include <stdio.h>

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n%5 == 0){
        printf("the number is divisible by 5");
    }
    else {
        printf("the number is not divisible by 5");
    }
}