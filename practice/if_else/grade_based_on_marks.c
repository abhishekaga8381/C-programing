#include <stdio.h>

int main(){
    int n;

    printf("Enter your marks : ");    
    scanf("%d", &n);

    if (n >= 80 && n <= 100){
        printf("The grade is A");
    }
    else if (n >= 60 && n < 80){
        printf("The grade is B");
    }
    else{
        printf("The grade is C");
    }
}