#include <stdio.h>

int main(){

    int i=1;
    int n;

    printf("Enter any no.");
    scanf("%d",&n);

    while(i<=n/2){
        if(n%i == 0){
            printf("\n%d",i);
        }
        i++;
    }
    printf("\n%d",n);
    
}