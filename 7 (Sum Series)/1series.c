/*WAP to find the sum of the given series: 
S = a^2 + a^2/2 + a^2/3 + ...... + a^2/10     */
#include<stdio.h>
void main()
{
    int a;
    float S, i;
    printf("Enter tha value of a \n");
    scanf("%d", &a);
    for(i = 1; i <= 10; i++)
    {
        S = S + ((a * a) / i);
    }
    printf("The sum of the series = %.3f", S);
}