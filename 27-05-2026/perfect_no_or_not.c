#include <stdio.h>

int main(){


    int i,n;
    int add = 0;
    printf("Enter any no =");
    scanf("%d", &n);
    i=1;

    while (i <= n/2){
        if (n%i == 0){
            add = add + i;
          
        }
        i++;
    }
    printf("\nAddition = %d",add);
    if (n == add){
        printf("It's a perfect no.");
    }
    else {
        printf("It's not a perfect no.");
    }
}   