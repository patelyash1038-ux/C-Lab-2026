#include<stdio.h>

int main(){
    char c;
    printf("Enter any character-");
    scanf("%c", &c);
    // ASCII value is unique number given number character
    printf("\nThe ASCII value of %c is %d", c, c);

    return 0;
}