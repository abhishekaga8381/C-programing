#include <stdio.h>

int main(){

    int n;
    int i =1;

    printf("Enter any no.");
    scanf("%d", &n);

    while(i <= 10){
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    printf("thanks for using table generator");
}