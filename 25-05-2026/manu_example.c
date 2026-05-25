#include <stdio.h>

int main(){

    int ch,opt;
    float radius, base, height, area_circle, area_triangle;

    area_of_shapes:
    printf("\nEnter 1 for area of circle  \n2 for area of triangle: ");
    scanf("%d", &ch);
    
   
   
    if(ch == 1) {
        printf("\nEnter the radius of the circle: ");
        scanf("%f", &radius);
        area_circle = 3.14 * radius * radius;
        printf("\nArea of the circle is: %f", area_circle);   
    } 
    else if (ch == 2) {
        printf("\nEnter the base and height of the triangle: ");
        scanf("%f %f", &base, &height);
         area_triangle = 0.5 * base * height;
        printf("\nArea of the triangle is: %f", area_triangle);
    }

    else {
        printf("\nInvalid choice! Please enter a valid option.\n");
    }
    printf("\nagain start the program yes enter 1, no enter 0 :");
    scanf("%d", &opt);
    if (opt==1){
        goto area_of_shapes;
    }
    else{
        printf("\nProgram ended.");
    }
}