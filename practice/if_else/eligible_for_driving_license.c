#include <stdio.h>

int main(){

    int n;

    printf("Enter a number :");
    scanf("%d", &n);

    if (n<=18){
        printf("Person is not elegible for driving license");
    }
    else {
        printf("Person is elegible for driving license");
    }
}