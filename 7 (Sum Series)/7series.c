/*WAP to find the sum of the given series: 
S = 1/a + 1/a^2 + 1/a^3 + ...... + 1/a^n      */
#include<stdio.h>
#include<math.h>
void main()
{
    int a, n;
    float S, i, p;
    printf("Enter tha value of a & the nth term\n");
    scanf("%d %d", &a, &n);
    for(i = 1; i <= n; i++)
    {
        p = pow(a,i);
        S = S + (1 / p);
    }
    printf("The sum of the series = %.3f", S);
}