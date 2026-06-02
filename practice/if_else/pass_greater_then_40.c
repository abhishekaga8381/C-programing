#include <stdio.h>

int main(){
    int n;

    printf("Enter a number :");
    scanf("%d", &n);
    
    if (n<=40){
        printf("Fail");
    }
    else {
        printf("You Pass this exam");
    }
}