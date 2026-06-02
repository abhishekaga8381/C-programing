#include <stdio.h>

int main(){

    int n;

    printf("Enter a number :");
    scanf("%d", &n);

    if (n<=18){
        printf("Person is not elegible to vote");
    }
    else {
        printf("Person is elegible to vote");
    }
}