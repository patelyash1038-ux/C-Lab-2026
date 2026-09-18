#include<stdio.h>

int main(){
    int B,HRA,DA,OA;
    printf("enter your basic salary\n");
    scanf("%d", &B);
    printf("enter your house rent allowence\n");
    scanf("%d", &HRA);
    printf("enter your dearness allowence\n");
    scanf("%d", &DA);
    printf("enter your other allowence\n");
    scanf("%d", &OA);
    int GI=B+HRA+DA+OA;
    printf("your gross income= %d", GI);


    return 0;
}