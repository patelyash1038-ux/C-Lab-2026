#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= 5; i++)
    {   int k=1;
        for (int j = 1; j <= 5; j++)
        {
            if (j == i)
            {
                printf("1");
            }
            else
            printf("0");
        }
        
        printf("\n");
    }
    return 0;
}