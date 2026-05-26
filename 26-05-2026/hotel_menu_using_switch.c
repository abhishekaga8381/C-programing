#include <stdio.h>

int main(){

    int opt;

    printf("\nWelcome to our hotel");
    printf("\n please select an option");
    printf("\n 1. starters");
    printf("\n 2. main course");
    printf("\n 3. desserts");

    scanf("%d", &opt);

    switch(opt){
        case 1:
            printf("\n you have selected starters");
            printf("\n1. soup");
            printf("\n2. salad");
            printf("\n3. bread & butter");
            

            break;
        case 2:
            printf("\n you have selected main course");
            printf("\n1. paneer tikka");
            printf("\n2. chicken korma");
            printf("\n3. dal tadka");
            break;
        case 3:
            printf("\n you have selected desserts");
            break;
        default:
            printf("\n invalid option");
    }


}