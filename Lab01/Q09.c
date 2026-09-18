#include<stdio.h>

int main(){
    int H,M,S;
    printf("Enter hours-");
    scanf("%d",&H);
    printf("\nEnter minutes-");
    scanf("%d",&M);
    printf("\nEnter seconds-");
    scanf("%d",&S);
    printf("\nCurrent time %d:%d:%d", H,M,S);
    //total seconds
    int T=(3600*H)+(60*M)+(S);
    printf("\nTotal time in seconds is= %d",T);

    return 0;
}