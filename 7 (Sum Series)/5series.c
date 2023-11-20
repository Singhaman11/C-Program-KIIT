/*WAP to find the sum of the given series: 
S = 1 + 2^2/a + 3^3/a^2 + ...... to n terms     */
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
        p = pow(i,i) / pow(a,(i-1));
        S = S + p;
    }
    printf("The sum of the series = %.3f", S);
}