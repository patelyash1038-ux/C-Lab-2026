#include<stdio.h>

int main(){
    //PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .
    /*
    METHOD 2
    int n,num,max,sec_max,has_second_max=0;
    printf("Enter no. of numbers to be added");
    scanf("%d",&n);
    if(n<2){
        printf("please enter atleast 2 numbers");
    }
    printf("Enter %d numbers", n);
    scanf("%d\n",&num);
    max=num;
    for(int i=1;i<n;i++){
        scanf("%d", &num);
        if(num>max){
            sec_max=max;
            max=num;
            has_second_max=1;
        }
        else if(num<max){
            if(has_second_max==0||num>sec_max){
                sec_max=num;
                has_second_max=1;
            }
        }
    }
    printf("\nMaximum number: %d\n", max);
    
    if (has_second_max == 1) {
        printf("Second Maximum number: %d\n", sec_max);
    } else {
        printf("Second Maximum: Does not exist (all numbers are identical)\n");
    }
        */
       int n,num1,num2,max,sec_max;
    printf("Enter no. of numbers to be added");
    scanf("%d",&n);
    if(n<2){
        printf("please enter atleast 2 numbers");
    }
    printf("Enter %d numbers", n);
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        max=num1;
        sec_max=num2;
    }
    else
    {
        max=num2;
        sec_max=num1;
    }
    for(int i=2;i<n;i++){
        scanf("%d",&num1);
        if(num1>max){
            sec_max=max;
            max=num1;
        }
        else if(num1>sec_max && num1<max){
            sec_max=num1;
        }
    }
    printf("max of all is %d\n",max);
    printf("sec max of all is %d\n",sec_max);
    return 0;
}