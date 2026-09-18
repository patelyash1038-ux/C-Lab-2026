#include<stdio.h>
//#include<math.h>
int main(){
    int num,remainder,NUM,final=0,n=0;
    printf("Enter one no.= ");
    scanf("%d",&num);
    NUM=num;
    while(NUM!=0){
        NUM/=10;
        ++n;
    }
    NUM=num;
    /*
    while(NUM!=0){
        remainder=NUM%10;
        final+=round((remainder)*(pow(10,n-1))); // OR final*10 + remainder
        n--;
        NUM/=10;
    }
        */
       while (NUM!=0){
        remainder=NUM%10;
        final=(10*final)+remainder;
        NUM/=10;
       }
    if(final==num){
        printf("%d is palindrome",num);
    }
    else{
        printf("%d is not palindrome",num);
    }
    return 0;
}