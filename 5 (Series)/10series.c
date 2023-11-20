//WAP to display first ten terms of the following series: 24, 99, 224, 399,……….
#include<stdio.h>
void main()
{
    int i, n;
    for(i = 1; i <= 10; i++)
    {
        n = ((5 * i) * (5 * i)) - 1;
        if(i < 10)
            printf("%d,", n);
        else
            printf("%d", n);
    }
}