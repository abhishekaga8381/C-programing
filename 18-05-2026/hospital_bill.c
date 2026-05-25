#include<stdio.h>

int main(){

    int Patient_ID, room_charges, no_of_days, doctor_fee, mediciene_fee, total;
    char name[15];
    
    printf("Patient name");
    scanf("%s", name);

    printf("Patient ID");
    scanf("%d", &Patient_ID);

    printf("room charges");
    scanf("%d", &room_charges);

    printf("no of days");
    scanf("%d", &no_of_days);

    printf("doctor fee");
    scanf("%d", &doctor_fee);

    printf("mediciene fee");
    scanf("%d", &mediciene_fee);

    total = (room_charges*no_of_days)+(doctor_fee+mediciene_fee);

    printf("\n============================");
    printf("\nPatient name %s", name);
    printf("\npatient id %d", Patient_ID);
    printf("\nroom charges %d", room_charges);
    printf("\nno of day %d", no_of_days);
    printf("\ndoctor fee %d", doctor_fee);
    printf("\nmedicine fee %d", mediciene_fee);
    printf("\ntotal amount %d", total);

}