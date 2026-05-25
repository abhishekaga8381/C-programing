#include<stdio.h>

int main (){

   int rollno;
   char name[15];
   int sub1,sub2,sub3,sub4,total;
   float perct;
   
   printf("Enter student roll no");
   scanf("%d", &rollno);
   
   printf("Enter student name");
   scanf("%s", name);
   
   printf("Enter student sub");
   scanf("%d%d%d%d", &sub1,&sub2,&sub3,&sub4);
   
   total=sub1+sub2+sub3+sub4;
   perct=total/0.4;
   
   printf("\n\t\trollno \t\t: %d", rollno);
   printf("\n\t\tname \t\t: %s", name);
   printf("\n\t\thindi \t\t: %d", sub1);
   printf("\n\t\tenglish \t: %d", sub2);
   printf("\n\t\tmaths \t\t: %d", sub3);
   printf("\n\t\tscience \t: %d", sub4);
   printf("\n\t\tperct \t\t: %f", perct);
  
}







