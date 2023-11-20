/*WAP to find the sum of the given series: 
S = a + a^2/2 + a^3/3 + ...... + a^10/10     */
#include<stdio.h>
#include<math.h>
void main()
{
    int a;
    float S, i, p;
    printf("Enter tha value of a \n");
    scanf("%d", &a);
    for(i = 1; i <= 10; i++)
    {
        p = pow(a,i);
        S = S + (p / i);
    }
    printf("The sum of the series = %.3f", S);
}