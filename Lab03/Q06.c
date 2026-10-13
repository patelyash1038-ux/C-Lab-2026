#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 5; i++)
    {
        int temp = a[i];
        a[i] = a[9 - i];
        a[9 - i] = temp;
    }

    printf("Reversed array:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}