#include <stdio.h>

int main(){
    
    int n,i;
    int x=1;

    printf("/nEnter any no.");
    scanf("%d", &n);

    i=2;
    while(i<=n/2){
        if (n%i == 0){
            x=0;
            break;
        }
        i++;
    }
    if (x==1){
        printf("Prime no.");
    }
    else{
        printf("Not a prime no.");
    }
}