#include <stdio.h>

int main(){

    char name[15];
    int ID;
    float previous_mr, current_mr, rate_per_unit, unit_consumed, water_charges, tax, service_charge, final_bill_amount;

    printf("Enter customer name: ");
    scanf("%s", name);

    printf("Enter customer ID: ");
    scanf("%d", &ID);

    printf("Enter previous meter reading: ");
    scanf("%f", &previous_mr);

    printf("Enter current meter reading: ");
    scanf("%f", &current_mr);

    printf("Enter rate per unit: ");
    scanf("%f", &rate_per_unit);
    
    unit_consumed = current_mr - previous_mr;
    water_charges = unit_consumed * rate_per_unit;
    tax = water_charges * 0.18;
    service_charge = 500;
    final_bill_amount = water_charges + tax + service_charge;

    printf("\nCustomer Name: %s", name);
    printf("\nCustomer ID: %d", ID);
    printf("\nPrevious Meter Reading: %.2f", previous_mr);
    printf("\nCurrent Meter Reading: %.2f", current_mr);
    printf("\nRate per Unit: %.2f", rate_per_unit);
    printf("\nUnit Consumed: %.2f", unit_consumed);
    printf("\nWater Charges: %.2f", water_charges);
    printf("\nTax : %.2f", tax);
    printf("\nService Charge: %.2f", service_charge);
    printf("\nFinal Bill Amount: %.2f", final_bill_amount);

}