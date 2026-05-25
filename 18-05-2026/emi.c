#include <stdio.h>
#include <math.h>

int main(){

    int loan_amount;
    float annual_intrest_rate, period_in_year, EMI, total_amount, total_intrest, r, n;

    printf("Enter loan amount");
    scanf("%d", &loan_amount);

    printf("Enter annual intrest rate");
    scanf("%f", &annual_intrest_rate);

    printf("Enter period of loan in year");
    scanf("%f", &period_in_year);

    r=annual_intrest_rate/(12*100);
    n=period_in_year*12;

    EMI = loan_amount*r*
    pow(1+r,n)/
    (pow(1+r,n)-1);
    
    total_amount = EMI*n;
    total_intrest = total_amount-loan_amount;

    printf("\nloan amount %d",loan_amount);
    printf("\nannual intrest rate %f",annual_intrest_rate);
    printf("\nperiod of loan in year %f",period_in_year);
    printf("\n\nemi per month %.2f", EMI);
    printf("\ntotal amount %.2f", total_amount);
    printf("\ntotal intrest %.2f", total_intrest);

}