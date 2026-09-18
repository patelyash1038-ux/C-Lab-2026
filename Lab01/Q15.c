#include<stdio.h>

int main(){
    int mark1,mark2,mark3,mark4,mark5;
    printf("enter mark1: ");
    scanf("%d", &mark1);
    printf("enter mark2: ");
    scanf("%d", &mark2);
    printf("enter mark3: ");
    scanf("%d", &mark3);
    printf("enter mark4: ");
    scanf("%d", &mark4);
    printf("enter mark5: ");
    scanf("%d", &mark5);
    int D = (mark1 + mark2 + mark3 + mark4 + mark5)/5 ;
    printf("Your percentage is: %d\n", D);
    
    if (D >= 90)
        printf("Your division is A\n");
    else if (D >= 80)
        printf("Your division is B\n");
    else if (D >= 60)
        printf("Your division is C\n");
    else if (D >= 40)
        printf("Your division is D\n");
    else
        printf("Your division is E\n");



    return 0;

}