/*WAP to find the sum of the given series: 
S = 1^2/a + 3^2/a^2 + 5^2/a^3 + ...... to n terms     */
#include<stdio.h>
#include<math.h>
void main()
{
    int a, n;
    int t = 1;
    float S, i, p;
    printf("Enter tha value of a & the nth term\n");
    scanf("%d %d", &a, &n);
    for(i = 1; i <= n; i++)
    {
        p = (t * t) / pow(a,i);
        S = S + p;
        t = t + 2;
    }
    printf("The sum of the series = %.3f", S);
}