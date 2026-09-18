#include<stdio.h>
int main(){
    /*
    
    Y(x,n) =1+x where n=1
            1+x/n where n=2
            1 +x^n when n=3
            1 + nx when n>3 or n<1
    
    */
    float Y,x,n;
    printf("Enter value of n ");
    scanf("%f", &n);
    printf("Enter value of x ");
    scanf("%f", &x);
    if(n==1){
        Y=1+x;
    }
    else if(n==2){
        Y=1+(x/n);
    }
    else if(n==3){
        Y=1+x*x*x;
    }
    else{
        Y=1+(n*x);
    }
    printf("The value of Y is=%f",Y);
    return 0;
}

