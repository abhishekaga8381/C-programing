#include <stdio.h>

int main(){

    int i=1;
    int n;
    int result=1;
    
    printf("Enter any no.");
    scanf("%d",&n);

    while(i<=n){
        result = result*i;
        i++;
    }
    printf("\n factorial of any no. = %d",result);
}