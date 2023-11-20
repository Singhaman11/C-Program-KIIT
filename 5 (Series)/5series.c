//WAP to display first ten terms of the following series: 1.5, 3.0, 4.5, 6.0,……….
#include<stdio.h>
void main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i < 10)
            printf("%.1f, ", (1.5 * i));
        else
            printf("%.1f", (1.5 * i));
    }
}