#include <stdio.h>

int main(){

    int what, total = 0;

    float cgst, sgst, totalb_bill;

    menu:

    printf("\n welcome to Agarwal's hotel \n");
    printf("\n Please select the type you want to order:");
    printf("\n 1. starters \n");
    printf("\n 2. Veg thali \n");
    printf("\n 3. Non-veg thali \n");
    printf("\n 4. Chinese thali \n");
    printf("\n 5. South Indian thali \n");
    printf("\n 6. Desserts \n");
    printf("\n 7. generate bill: \n");
    printf("\n Enter your choice: \n");
    scanf("%d", &what);

    if (what == 1){

        starters:
        printf("\n you have selected starters \n");
        printf("\n 1. Aloo Tikki = Rs. 50 \n");
        printf("\n 2. Paneer Tikka = Rs. 60 \n");
        printf("\n 3. Chicken Tikka = Rs. 70 \n");
        printf("\n 4. Veg Spring Rolls = Rs. 40 \n");
        printf("\n 5. Chicken Spring Rolls = Rs. 50 \n");
        printf("\n 6. Veg Manchurian = Rs. 45 \n");
        printf("\n 7. Chicken Manchurian = Rs. 55 \n");
        printf("\n Enter the item number you want to order: \n");
        int item;
        scanf("%d", &item);
        if (item == 1)
        {
            total = total + 50;
        }
        else if (item == 2)
        {
            total = total + 60;
        }
        else if (item == 3)
        {
            total = total + 70;
        }
        else if (item == 4)
        {
            total = total + 40;
        }
        else if (item == 5)
        {
            total = total + 50;
        }
        else if (item == 6)
        {
            total = total + 45;
        }
        else if (item == 7)
        {
            total = total + 55;
        }
        else {
            printf("\nInvalid\n");
        }
        printf("\n Do you want to order more items? enter 1.Yes OR 2.No or 3.Generate Bill: \n");
        int opt;
        scanf("%d", &opt);
        if (opt == 1){
            goto starters;
        }
        else if (opt == 2 ){
            goto menu;
        }
        else{
            goto bill;
        }


    }
    else if (what == 2){

        veg_thali:

        printf("\n you have selected veg thali \n");
        printf("\n 1. Dal Tadka = Rs. 400 \n");
        printf("\n 2. Palak Paneer = Rs. 500 \n");
        printf("\n 3. Shahi Paneer = Rs. 600 \n");
        printf("\n 4. Malai Kofta = Rs. 550 \n");
        printf("\n 5. Aloo Matar = Rs. 450 \n");
        int item;
        printf("\n Enter the item number you want to order: \n");
        scanf("%d", &item);

        if (item == 1)
        {
            total = total + 400;
        }
        else if (item == 2)
        {
            total = total + 500;
        }
        else if (item == 3)
        {
            total = total + 600;
        }
        else if (item == 4)
        {
            total = total + 550;
        }
        else if (item == 5)
        {
            total = total + 450;
        }
        else {
            printf("\nInvalid\n");
        }
        printf("\n Do you want to order more items? enter 1.Yes OR 2.No or 3.Generate Bill: \n");
        int opt;
        scanf("%d", &opt);
        if (opt == 1 ){
            goto veg_thali;
        }
        else if (opt == 2 ){
            goto menu;
        }
        else{
            goto bill;
        }

    }
    else if (what == 3){

        non_veg_thali:

        printf("\n you have selected non-veg thali \n");
        printf("\n 1. Chicken Biryani = Rs. 150 \n");
        printf("\n 2. Mutton Biryani = Rs. 200 \n");
        printf("\n 3. Fish Curry = Rs. 180 \n");
        printf("\n 4. Chicken Curry = Rs. 160 \n");
        printf("\n 5. Mutton Curry = Rs. 220 \n");
        printf("\n Enter the item number you want to order: \n");
        int item;
        scanf("%d", &item);  
        if (item == 1)
        {
            total = total + 150;
        }
        else if (item == 2)
        {
            total = total + 200;
        }
        else if (item == 3)
        {
            total = total + 180;
        }
        else if (item == 4)
        {
            total = total + 160;
        }
        else if (item == 5)
        {
            total = total + 220;
        }
        else {
            printf("\nInvalid\n");
        }
        printf("\n Do you want to order more items? enter 1.Yes OR 2.No or 3.Generate Bill: \n");
        int opt;
        scanf("%d", &opt);
        if (opt == 1){
            goto non_veg_thali;
        }
        else if (opt == 2){
            goto menu;
        }
        else{
            goto bill;
        }
    }
    else if (what == 4){

        chinese_thali:

        printf("\n you have selected chinese thali \n");
        printf("\n 1. Veg Fried Rice = Rs. 100 \n");
        printf("\n 2. Chicken Fried Rice = Rs. 120 \n");
        printf("\n 3. Veg Noodles = Rs. 80 \n");
        printf("\n 4. Chicken Noodles = Rs. 100 \n");
        printf("\n Enter the item number you want to order: \n");
        int item;
        scanf("%d", &item);
        if (item == 1)
        {
            total = total + 100;
        }
        else if (item == 2)
        {
            total = total + 120;
        }
        else if (item == 3)
        {
            total = total + 80;
        }
        else if (item == 4)
        {
            total = total + 100;
        }
        else {
            printf("\nInvalid\n");
        }
        printf("\n Do you want to order more items? enter 1.Yes OR 2.No or 3.Generate Bill: \n");
        int opt;
        scanf("%d", &opt);
        if (opt == 1){
            goto chinese_thali;
        }
        else if (opt == 2){
            goto menu;
        }
        else{
            goto bill;
        }
    }
    else if (what == 5){

        south_indian_thali:

        printf("\n you have selected south indian thali \n");
        printf("\n 1. Dosa = Rs. 50 /n");
        printf("\n 2. Idli = Rs. 40 /n");
        printf("\n 3. Vada = Rs. 30 /n");
        printf("\n 4. Upma = Rs. 60 /n");
        printf("\n Enter the item number you want to order: \n");
        int item;
        scanf("%d", &item);
        if (item == 1)
        {
            total = total + 50;
        }
        else if (item == 2)
        {
            total = total + 40;
        }
        else if (item == 3)
        {
            total = total + 30;
        }
        else if (item == 4)
        {
            total = total + 60;
        }
        else {
            printf("\nInvalid\n");
        }
        printf("\n Do you want to order more items? enter 1.Yes OR 2.No or 3.Generate Bill: \n");
        int opt;
        scanf("%d", &opt);
        if (opt == 1){
            goto south_indian_thali;
        }
        else if (opt == 2){
            goto menu;
        }
        else{
            goto bill;
        }
    }
    else if (what == 6){

        desserts: 

        printf("\n you have selected desserts \n");
        printf("\n 1. Gulab Jamun = Rs. 50 \n");
        printf("\n 2. Rasgulla = Rs. 40 \n");
        printf("\n Enter the item number you want to order: \n");
        int item;
        scanf("%d", &item);
        if (item == 1)
        {
            total = total + 50;
        }
        else if (item == 2)
        {
            total = total + 40;
        }
        else {
            printf("\nInvalid\n");
        }
        printf("\n Do you want to order more items? enter 1.Yes OR 2.No or 3.Generate Bill: \n");
        int opt;
        scanf("%d", &opt);
        if (opt == 1){
            goto desserts;
        }
        else if (opt == 2){
            goto menu;
        }
        else{
            goto bill;
        }
    }
    else if (what == 7){
        printf("\n generating bill... \n");
    }
    else {
        printf("\n Invalid choice! Please select a valid option. \n");
        goto menu;
    }

    bill:
printf("\n =====================print bill===================== \n");

    cgst = total * 0.09;
    sgst = total * 0.09;
    totalb_bill = total + cgst + sgst;
    printf("\n Your total is: Rs. %d \n", total);
    printf("\n CGST: Rs. %.2f \n", cgst);
    printf("\n SGST: Rs. %.2f \n", sgst);
    printf("\n Total bill including taxes: Rs. %.2f \n", totalb_bill);


}