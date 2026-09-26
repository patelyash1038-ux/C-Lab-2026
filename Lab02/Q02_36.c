#include<stdio.h>

int main(){
    int n=5;
    for(int i=1;i<=5;i++){
        char c='A';
        for(int j=1;j<=i;j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}