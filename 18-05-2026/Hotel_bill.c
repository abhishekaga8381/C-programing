#include<stdio.h>

int main(){

    char name[15];
    int days, roon_rent, food_charges, total;
    float tax, total_bill;

    printf("name of customer");
    scanf("%s", name);

    printf("days they will stay");
    scanf("%d", &days);

    printf("room rent they will pay");
    scanf("%d", &roon_rent);

    printf("food charges they will pay");
    scanf("%d", &food_charges);

    total = (days*roon_rent) + food_charges;
    tax = total*18/100;
    total_bill = total+tax;

    printf("\nname of customer %s",name);
    printf("\ndays they will stay %d",days);
    printf("\nroom rent they will pay %d",roon_rent);
    printf("\nfood charges they will pay %d",food_charges);
    printf("\n\ntotal %d",total);
    printf("\ngst %f",tax);
    printf("\ntoatal bill after tax %f",total_bill);


}