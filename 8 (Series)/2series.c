//WAP to find the sum of the given series : 1 + (1/2) + (1/3) + ...... + (1/20)
#include<stdio.h>
void main()
{
    int i;
    float s;
    for(i = 1; i <= 20; i++)
    {
        s = s + (1.0 / i);
    }
    printf("Sum = %.2f \n", s);
}