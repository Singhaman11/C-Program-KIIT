//WAP to display first ten terms of the following series: 0, 3, 8, 15,……….
#include<stdio.h>
void main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i < 10)
            printf("%d,", (i * i) - 1);
        else
            printf("%d", (i * i) - 1);
    }
}