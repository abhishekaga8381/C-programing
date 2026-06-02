#include <stdio.h>

int main(){
    int n;

    printf("Enter your age : ");    
    scanf("%d", &n);

    if (n >= 0 && n <= 12){
        printf("The age group is Child");
    }
    else if (n >= 13 && n <= 19){
        printf("The age group is Teenager");
    }
    else if (n >= 20 && n <= 59){
        printf("The age group is Adult");
    }
    else{
        printf("The age group is Senior Citizen");
    }
}