#include <stdio.h>

int main(){
    int n,m;

    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter another number : ");
    scanf("%d", &m);

    if(n>m){
        printf("the number %d is greater than %d", n,m);
    
    }
    if (n<m){
        printf("the number %d is greater than %d", m,n);
    }
}