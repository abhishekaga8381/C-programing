#include <stdio.h>

int main(){

    char name [20];
    int roll_no, sub1, sub2, sub3, total, percentage, grade;

    printf("Enter name: ");
    scanf("%s", name);      

    printf("Enter roll number: ");
    scanf("%d", &roll_no);      

    printf("Enter marks of mathematics: ");
    scanf("%d", &sub1);
    printf("Enter marks of science: ");
    scanf("%d", &sub2);
    printf("Enter marks of social studies: ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    percentage = total / 3;
    
    printf("Total marks: %d\n", total);
    printf("Percentage: %d\n", percentage);
    
    if (percentage >= 90 && percentage <100)
    {
        printf ("Grade A");
    }
    else if (percentage >=80 && percentage <90){
        printf("Grade B");
    }
    else if (percentage >=70 && percentage <80){
        printf("Grade C");
    }
    else if (percentage >=60 && percentage <70){
        printf("Grade D");
    }
    if (percentage <=100 && percentage <60){
        printf("Pass");
    }
    else if (percentage <60){
        printf("Fail");
    }
    
}