//WAP to display first ten terms of the following series: 1, 2, 4, 7, 11,……….
#include<stdio.h>
void main()
{
    int i, s = 1;
    for(i = 0; i < 10; i++)
    {
        s = s + i;
        if(i < 9)
            printf("%d,", s);
        else
            printf("%d", s);
    }
}