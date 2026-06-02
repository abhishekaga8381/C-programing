#include <stdio.h>

int main(){

    int num;

    printf("Enter any number");
    scanf("%d", &num);

    switch (num<18){

        case 0:
        printf("person is elegible to vote");
        break;

        default:
        printf("person is not elegible to vote");
    }
}