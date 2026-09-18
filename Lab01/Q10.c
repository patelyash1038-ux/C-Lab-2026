#include<stdio.h>

int main(){
    int m,p,c,e;
    printf("\nEnter your mathematics marks:");
    scanf("%d", &m);
    printf("\nEnter your physics marks:");
    scanf("%d", &p);
    printf("\nEnter your chemistry marks:");
    scanf("%d", &c);
    printf("\nEnter your enterance exam marks:");
    scanf("%d", &e);
    int CM= (m/2)+(p/2)+(c/2)+e;
    printf("Your cut off marks is= %d", CM);
    return 0;
}