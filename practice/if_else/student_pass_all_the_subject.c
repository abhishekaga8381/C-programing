#include <stdio.h>

int main(){
    int english, math, science;

     printf("Enter your english subject marks : ");
    scanf("%d", &english);
    printf("Enter your math subject marks : ");
    scanf("%d", &math);
    printf("Enter your science subject marks : ");
    scanf("%d", &science);

    if (english >= 80 && english <= 100){
        printf("\nThe grade for English is A");
    }
    else if (english >= 60 && english < 80){
        printf("\nThe grade for English is B");
    }
    else{
        printf("\nThe grade for English is C");
    }
    if (math >= 80 && math <= 100){
        printf("\nThe grade for Math is A");
    }
    else if (math >= 60 && math < 80){
        printf("\nThe grade for Math is B");
    }
    else{
        printf("\nThe grade for Math is C");
    }
    if (science >= 80 && science <= 100){
        printf("\nThe grade for Science is A");
    }
    else if (science >= 60 && science < 80){
        printf("\nThe grade for Science is B");
    }
    else{
        printf("\nThe grade for Science is C");
    }
    if (english >= 60 && math >= 60 && science >= 60){
        printf("\nYou pass all the subjects");
    }
    else {
        printf("\nYou fail in one or more subjects");
    }
}