#include <stdio.h>

int main() {

    int i, j;
    char ch = 65;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }

    ch = 68;

    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        ch--;
        printf("\n");
    }

    return 0;
}