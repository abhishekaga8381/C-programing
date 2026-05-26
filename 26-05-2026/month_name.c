#include <stdio.h>

int main(){

    int month1 = 1, month2 = 2, month3 = 3, month4 = 4, month5 = 5, month6 = 6, month7 = 7, month8 = 8, month9 = 9, month10 = 10, month11 = 11, month12 = 12;
    int ch;
    printf("Enter no.of months (1-12): ");
    scanf("%d", &ch);


    switch(ch) {

        case 1 : 
        printf("January %d", month1); 
        break;

         case 2 : 
        printf("February %d", month2); 
        break;

         case 3 : 
        printf("March %d", month3); 
        break;

         case 5 : 
        printf("May %d", month5);   
        break;

        case 6 :
        printf("June %d", month6);   
        break;

        case 7 : 
        printf("July %d", month7);   
        break;

        case 8 : 
        printf("August %d", month8);   
        break;

        case 9 : 
        printf("September %d", month9);   
        break;

        case 10 : 
        printf("October %d", month10);   
        break;

        case 11 : 
        printf("November %d", month11);   
        break;

        default :
        printf("default result");
         
    
    }

}