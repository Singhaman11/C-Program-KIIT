/*WAP to find the sum of the given series: 
S = a + a^2 + a^3 + ...... + a^n     */
#include<stdio.h>
#include<math.h>
void main()
{
    int a, n;
    float S, i, p;
    printf("Enter tha value of a & the nth power\n");
    scanf("%d %d", &a, &n);
    for(i = 1; i <= n; i++)
    {
        p = pow(a,i);
        S = S + p;
    }
    printf("The sum of the series = %.3f", S);
}