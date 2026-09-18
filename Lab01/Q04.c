#include<stdio.h>

int main(){
    float F;
    // F= 9/5*c+32
    printf("enter the value in fahrenheit ");
    scanf("%f", &F);
    float C=(5.0/9.0)*(F-32);
    printf("the value in celcius is %f\n", C);
    return 0;
}