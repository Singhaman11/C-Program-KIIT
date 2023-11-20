//WAP to find the sum of the given series : (1/2) + (2/3) + (3/4) + ...... + (19/20)
#include<stdio.h>
void main()
{
    int i;
    float s;
    for(i = 1; i <= 5; i++)
    {
        s = s + ((i - 1.0) / i);
    }
    printf("Sum = %.2f \n", s);
}