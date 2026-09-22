/*Consumption in unit Rate for Charge
0-200 Re 0.50 per unit
210-400 Rs. 100 plus Re 0.65 per unit excess of 200
401-600 Rs. 230 plus Re 0.80 per unit excess of 400
Above 600 Rs. 425 plus Rs. 125 per unit excess of 600*/
#include<stdio.h>

int main(){
    int units;
    float charge;
    printf("Enter the units");
    scanf("%d",&units);
    if(units<=200){
        charge=(units*0.5);
    }
    if(units>=201&&units<=400){
        charge=((units-200)*0.65)+100;
    }
    if(units<=401&&units>=600){
        charge=(units-400)*0.8 + 230;
    }
    if(units>600){
        charge=(units-600)*125+ 425;
    }
    printf("The commission is %.2f",charge);
    return 0;
}