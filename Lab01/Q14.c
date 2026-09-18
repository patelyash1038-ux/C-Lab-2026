#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A') {
        if (ch <= 'Z')
            printf("Capital letter");
        else
            printf("Not capital letter");
    }
    else if (ch >= 'a') {
        if (ch <= 'z')
            printf("Small letter");
        else
            printf("Not small letter");
    }
    else if (ch >= '0') {
        if (ch <= '9')
            printf("Digit");
        else
            printf("Special character");
    }
    else
        printf("Special character");

    return 0;
}
