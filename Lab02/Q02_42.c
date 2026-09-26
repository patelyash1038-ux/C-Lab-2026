#include<stdio.h>

int main(){
    int n = 7;
    for (int i = 1; i <= 4; i++)
    {
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for (int k = 1; k<= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 3; i >= 1; i--)
    {
        for(int k=1;k<=4-i;k++){
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}