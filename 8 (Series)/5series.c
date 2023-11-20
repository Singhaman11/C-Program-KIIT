//WAP to find the sum of the given series : 2 - 4 + 6 - 8 + ...... – 20
#include<stdio.h>
void main()
{
    int i;
    float s;
    for(i = 1; i <= 10; i++)
    {
        if((i % 2) == 1)
            s = s + (2 * i);
        else
            s = s - (2 * i);
    }
    printf("Sum = %.2f \n", s);
}