//WAP to display first ten terms of the following series: 1, 9, 25, 49,……….
#include<stdio.h>
void main()
{
    int i, n = 1;
    for(i = 1; i <= 10; i++)
    {
        if(i < 10)
            printf("%d,", (n * n));
        else
            printf("%d", (n * n));
        n = n + 2;
    }
}