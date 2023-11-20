//WAP to display first ten terms of the following series: 4, 16, 36, 64,……….
#include<stdio.h>
void main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i < 10)
            printf("%d,", (4 * i * i));
        else
            printf("%d", (4 * i * i));
    }
}