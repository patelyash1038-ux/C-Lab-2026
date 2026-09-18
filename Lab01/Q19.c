#include<stdio.h>

int main(){
    char C;
    printf("enter one character: ");
    scanf("%c", &C);
    (C>='a'&&C<='z')?(printf("small letter")):(printf("not small letter"));
    return 0;
}