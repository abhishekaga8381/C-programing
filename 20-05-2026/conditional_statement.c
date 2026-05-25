#include <stdio.h>

int main (){

  /*  int price;
    
    printf("Enter price: ");
    scanf("%d", &price);

    if((price >= 8000) && (price < 10000))
    {
        printf("10%% discount = %d", price*10/100);
    }
    else if((price >= 6000) && (price < 8000))
    {
        printf("5%% discount = %d", price*5/100);
    }
    else
    {
        printf("price = %d", price);
    }
     */

//=============================================================================================


    // int no;
    // printf("Enter a number: ");
    // scanf("%d", &no);
    
    // if (no == 0)
    // {
    //     printf("number is zero");
    // }
    // else if (no %2 == 0)
    // {
    //     printf("number is even");
    // }
    // else{
    //     printf("number is odd");
    // }


//=============================================================================================


   /* // int no;
    // printf("Enter a number: ");
    // scanf("%d", &no);

    // if (no % 3 == 0 && no %5 == 0)
    // {
    //     printf("number is divisible by 3 and 5");
    // }
    // else if (no % 3 == 0)
    // {
    //     printf("number is divisible by 3");
    // }
    // else if (no %5 == 0)
    // {
    //     printf("number is divisible by 5");
    // }
    // else
    // {
    //     printf("number is not divisible by 3 and 5");
    // }*/  
    
//=============================================================================================

   /* // char ch;
    // printf("Enter a character: ");
    // scanf("%c", &ch);

    // if (ch >= 65 && ch <= 90)
    // {
    //     if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    //     {
    //         printf("character is a caps vowel");
    //     }
    //     else
    //     {
    //         printf("character is in capslock");
    //     }
        
    // }
    // else if (ch >= 97 && ch <= 122)
    // {
    //     if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    //     {
    //         printf("character is a lower vowel");
    //     }
    //     else
    //     {
    //         printf("character is in lower lock");
    //     }
    // }
    // else if (ch >= 48 && ch <= 57)
    // {
    //     printf("character is a number");
    // }
    // else
    // {
    //     printf("character is something else");
    // }      */

//=============================================================================================

int no1, no2, no3;
    printf("Enter a number 1: ");
    scanf("%d", &no1);

    printf("Enter a number 2: ");
    scanf("%d", &no2); 

    printf("Enter a number 3: ");
    scanf("%d", &no3);

    if (no1 != no2 && no1 != no3 && no2 != no3)
    {
        if (no1 > no2 && no1 > no3)
        {
            printf("number 1 is greatest");
        }
        else if (no2 > no1 && no2 > no3)
        {
            printf("number 2 is greatest");
        }
        else 
        {
            printf("number 3 is greatest");
        }
    
        printf("Test case 1 =\n%d\n%d\n%d", no1,no2,no3);
    }
    else if (no1 == no2 && no1 == no3 && no2 == no3) 
    {
        printf("all numbers are equal");
        printf("Test case 3 = \n%d\n%d\n%d", no1, no2, no3);
    }
    else if (no1 == no2 || no1 == no3 || no2 == no3)
    {
        if (no1 == no2 && no1 > no3) {
            printf("\n no1 and no2 is greatest");
        }
        else if (no2 == no3 && no2 > no1){
            printf("\n no2 and no3 is greatest");
        }
        else if (no3 == no1 && no3 > no2){
            printf("\n  no3 and no1 is greatest");
        }
        
        printf("Test case 2 = \n%d\n%d\n%d", no1,no2,no3);
    }

}
