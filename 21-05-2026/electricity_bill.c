#include <stdio.h>

int main (){

    int customer_id, number_of_units;
    char customer_name[50];
    float total, cgst, sgst, final_amount;

    printf("Enter customer id");
    scanf("%d", &customer_id);

    printf("Enter number of units");
    scanf("%d", &number_of_units);

    printf("Enter customer name");
    scanf("%s", customer_name);

    
    if (number_of_units < 100){
       total = number_of_units*3.33;
    }
    else if (number_of_units > 100 && number_of_units <300){
        total = (100*3.33)+((number_of_units-100)*5.55);
    }
    else if (number_of_units > 300 && number_of_units < 500){
        total = (100*3.33)+(200*5.55)+(number_of_units-300)*7.77;
    }
    else if (number_of_units > 500){
        total = (100*3.33)+(200*5.55)+(200*7.77)+(number_of_units-500)*11.11;
    }
    else{
        printf("default amount is 500");
    }


    total = total + 500;
    cgst = total*0.06;
    sgst = total*0.06;  
    final_amount = total + cgst + sgst;

    printf("Customer id: %d\n", customer_id);
    printf("Customer name: %s\n", customer_name);
    printf("Number of units: %d\n", number_of_units);
    printf("Total amount: %.2f\n", total);
    printf("CGST: %.2f\n", cgst);
    printf("SGST: %.2f\n", sgst);
    printf("Final amount: %.2f\n", final_amount);
    return 0;
    

}