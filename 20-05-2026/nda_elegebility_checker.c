#include<stdio.h>

int main(){

    char name[20], gender;
    int age, weight, height;

    printf("Enter name: "); 
    scanf("%s", name);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);  

    printf("Enter weight (in kg): ");
    scanf("%d", &weight);   

    printf("Enter height (in cm): ");
    scanf("%d", &height);

    if (gender == 'M'|| gender == 'm')
    {
        if ((age >= 18 && age <= 21) && (weight <= 85 && weight >= 60) && (height >= 168 && height <= 192)){
            printf("Congratulations %s, You are eligible for NDA.", name);
        }
        else{
           if(age < 18 || age > 21){
                printf("Sorry %s, you are not eligible for NDA due to age criteria.", name);
            }
            else if (weight < 60 || weight > 85){
                printf("Sorry %s, you are not eligible for NDA due to weight criteria.", name);
            }
            else if (height < 168 || height > 192){
                printf("Sorry %s, you are not eligible for NDA due to height criteria.", name);
            }
            else{
                printf("Sorry %s, you are not eligible for NDA.", name);
            }
        }
    }
    else  if (gender == 'F'|| gender == 'f')
    {
        if ((age >= 18 && age <= 21) && (weight <= 60 && weight >= 49) && (height >= 152 && height <= 172)){
            printf("Congratulations %s, You are eligible for NDA.", name);
        }
        else{
           if(age < 18 || age > 21){
                printf("Sorry %s, you are not eligible for NDA due to age criteria.", name);
            }
            else if (weight < 49 || weight > 60){
                printf("Sorry %s, you are not eligible for NDA due to weight criteria.", name);
            }
            else if (height < 152 || height > 172){
                printf("Sorry %s, you are not eligible for NDA due to height criteria.", name);
            }
            else{
                printf("Sorry %s, you are not eligible for NDA.", name);
            }
        }
    }
}