#include<stdio.h>

int main(){

    int a,b;
    
    printf("Enter any number");
    scanf("%d%d", &a,&b);

    switch(a>b){
        case 1: 
        printf("a is greater then b %d", a);
        break;
        
        default:
        printf("b is greaster then a %d", b);
    }
}