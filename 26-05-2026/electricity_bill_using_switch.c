#include<stdio.h>

int main(){

    int untits, total_bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &untits);

    switch(untits) {
        case 0 ... 100:
            total_bill = untits * 2;
            printf("Total bill: %d", total_bill);
            break;
        case 101 ... 200:
            total_bill = (100 * 2) + ((untits - 100) * 3);
            printf("Total bill: %d", total_bill);
            break;
         default :
            total_bill = (100 * 2) + (100 * 3) + ((untits - 200) * 5);
            printf("Total bill: %d", total_bill);
            break;
       
    }
}