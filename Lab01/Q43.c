/*If sales<=Rs. 500, commission is 5%
If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
If sales>5000, commission is 12.5%*/
#include<stdio.h>

int main(){
    int sales;
    float commision;
    printf("Enter the sales");
    scanf("%d",&sales);
    if(sales<=500){
        commision=(sales*5)/100;
    }
    if(sales>500&&sales<=2000){
        commision=((sales-500)/10)+35;
    }
    if(sales<=5000&&sales>2000){
        commision=(((sales-2000)*12)/100) + 185;
    }
    if(sales>5000){
        commision=(sales*12.5)/100;
    }
    printf("The commission is %.2f",commision);
    return 0;
}