#include<stdio.h>

int main(){
    int n = 5;
    for (int i = 1; i <= 5; i++)
    {
        int s=1;
        while(s<=5-i){
            printf(" ");
            s++;
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}