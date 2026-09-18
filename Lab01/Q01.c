#include <stdio.h>

int main() {
    float P, R, T, I;

    printf("Enter principal value: \n");
    scanf("%f", &P);

    printf("Enter interest per year in percentage: \n");
    scanf("%f", &R);

    printf("Enter time in years:\n ");
    scanf("%f", &T);

    I = P * R * T / 100;

    printf("Your interest = %.2f\n", I);

    return 0;
}