#include <stdio.h>

int main(){
    char username[5], password[10];

    printf("Enter your username : ");
    scanf("%s", username);
    printf("Enter your password : ");
    scanf("%s", password);

    if (username[5] == 'admin' && password[10] == 'admin1234'){
        printf("Login successful");
    }
    else {
        printf("Login failed");
    }

    
}