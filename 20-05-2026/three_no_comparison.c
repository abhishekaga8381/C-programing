#include <stdio.h>

int main (){

    int no1, no2, no3;
    printf("Enter a number 1, number 2, number 3: ");
    scanf("\n%d\n%d\n%d", &no1, &no2, &no3);

    if (no1 != no2 && no1 != no3 && no2 != no3)
    {
        if (no1 > no2 && no1 > no3)
        {
            printf("number1 is greatest");
        }
        else if (no2 > no1 && no2 > no3)
        {
            printf("number2 is greatest");
        }
        else
        {
            printf("number3 is greatest");
        }
        printf("Test case 1 =\n%d\n%d\n%d", no1,no2,no3);
    }
    else if (no1 == no2 && no2 == no3 && no3 == no1)
    {
        printf("all numbers are equal");
        printf("Test case 3 = \n%d\n%d\n%d", no1, no2, no3);
    }
    else if (no1 == no3 || no2 == no3 || no1 == no2)
    {
        if (no1 == no3 && no1 > no2){
            printf("\n no1 and no3 is greatest");
        }
        else if (no2 == no3 && no2 > no1){
            printf("\n no2 and no3 is greatest");
        }
        else if (no1 == no2 && no1 > no3){
            printf("\n no1 and no2 is greatest");
        }
        printf("Test case 2 = \n%d\n%d\n%d", no1,no2,no3);
    }

}