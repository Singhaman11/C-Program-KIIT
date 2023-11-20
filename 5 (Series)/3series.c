//WAP to display first ten terms of the following series: 3, 6, 9, 12,……….
#include<stdio.h>
void main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i < 10)
            printf("%d,", (3 * i));
        else
            printf("%d", (3 * i));
    }
}