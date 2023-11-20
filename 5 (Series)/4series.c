//WAP to display first ten terms of the following series: 4, 8, 16, 32,……….
#include<stdio.h>
void main()
{
    int i, p = 4;
    for(i = 1; i <= 10; i++)
    {
        if(i < 10)
            printf("%d,", p);
        else
            printf("%d", p);
        p = p * 2;
    }
}