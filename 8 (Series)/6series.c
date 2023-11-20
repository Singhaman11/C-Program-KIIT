//WAP to find the sum of the given series : (1*2) + (2*3) + ...... + (19*20)
#include<stdio.h>
void main()
{
    int i;
    float s;
    for(i = 1; i <= 20; i++)
    {
        s = s + ((i - 1) * i);
    }
    printf("Sum = %.2f \n", s);
}