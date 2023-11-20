//WAP to display first ten terms of the following series: 1, 4, 9, 16,……….
#include<stdio.h>
void main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i < 10)
            printf("%d,", (i * i));
        else
            printf("%d", (i * i));
    }
}