#include<stdio.h>

int main (){

   int id;
   char productname[15];
   int product_price;
   int product_qty,total;
   float cgst,sgst,finaltotal;
   
   printf("Enter product id");
   scanf("%d", &id);
   
   printf("Enter productname");
   scanf("%s", productname);
   
   printf("Enter product price");
   scanf("%d", &product_price);
   
   printf("Enter product quantity");
   scanf("%d", &product_qty);
   
   total=product_price*product_qty;
   cgst=total*0.06;
   sgst=total*0.06;
   finaltotal=total+cgst+sgst;
   
   printf("\n\tproduct id \t: %d", id);
   printf("\n\tproductname \t: %s", productname);
   printf("\n\tproduct price \t: %d", product_price);
   printf("\n\tproduct quantity : %d", product_qty);
   printf("\n\ttotal \t\t: %d", total);
   printf("\n\tcgst \t\t: %f", cgst);
   printf("\n\tsgst \t\t: %f", sgst);
   printf("\n\tfinaltotal \t: %f", finaltotal);
  
  
}







