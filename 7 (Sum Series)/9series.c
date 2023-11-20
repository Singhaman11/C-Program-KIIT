/*WAP to find the sum of the given series: 
S = 1 - a + a^2 – a^3 + ………………+ a^10      */
#include<stdio.h>
#include<math.h>
void main()
{
    int a, i;
    float S;
    printf("Enter tha value of a \n");
    scanf("%d", &a);
    for(i = 0; i <= 10; i++)
    {
        if(i % 2 == 0)
            S = S + pow(a,i);
        else
            S = S - pow(a,i);
    }
    printf("The sum of the series = %.3f", S);
}