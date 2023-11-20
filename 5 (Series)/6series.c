//WAP to display first ten terms of the following series: 0, 7, 26,……….
#include<stdio.h>
void main()
{
    int i, c;
    for(i = 1; i <= 10; i++)
    {
        c = (i * i * i) - 1;
        if(i < 10)
            printf("%d,", c);
        else
            printf("%d", c);
    }
}