#include <stdio.h>

int main(){

    int i,j;

    for(i=10; i>0; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("%4d", j);
        }
        printf("\n");
    }
}