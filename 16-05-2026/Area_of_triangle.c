#include<stdio.h>

int main (){

  float base,height,area;
  
  printf("Enter base and height of triangle");
  scanf("%f%f", &base,&height);
  
  area=0.5*base*height;
  
  printf("Area is triangle is : %f",area);
 
}