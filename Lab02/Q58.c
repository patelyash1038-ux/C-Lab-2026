#include<stdio.h> 

int main()
{
    int a[10],keyelement,index,flag=0;
    printf("Enter Elements row wise\n");
    for(int i=0;i<10;i++){  
                scanf("%d",&a[i]);
    }
    printf("Enter the no. to search\n");
    scanf("%d",&keyelement);
    for (int i = 0; i < 10; i++)
    {
        if(a[i]==keyelement){
            index=i;
            printf("\nThe %d number is on %d position",keyelement,index);
            flag=1;
        }
    }  
    if(flag=0){
            printf("\nNumber not found");
        }  
    return 0;
}