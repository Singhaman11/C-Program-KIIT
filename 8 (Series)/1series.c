//WAP to find the sum of the given series : 1 + 4 + 9 + ...... + 400
#include<stdio.h>
void main()
{
    int i, s;
    for(i = 1; i <= 20; i++)
    {
        s = s + (i * i);
    }
    printf("Sum = %d \n", s);
}