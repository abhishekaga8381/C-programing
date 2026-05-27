#include <stdio.h>

int main(){


    int i=2;

    int total = 0;

    while(i<=20)
    {
        printf("%d\n",i);        
            
            i=i+2;
            total=total+i;
    }
    printf("sum of all 10 even no. = %d",total);
}