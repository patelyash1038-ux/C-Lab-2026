#include<stdio.h>

int main(){
    // period of revolution of earthis 31558150
    float T=31558150,D,H,M;
    M=T/60;
    H=M/60;
    D=H/24;
    printf("period in minutes:%f\n", M);
    printf("period in hours:%f\n",H);
    printf("period in days:%f\n",D);


    return 0;
}