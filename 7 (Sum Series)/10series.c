/*WAP to find the sum of the given series: 
S = a – a/2 + a/3 – a/4 + ……………… – a/20      */
#include<stdio.h>
#include<math.h>
void main()
{
    int i;
    float a, S = 0;
    printf("Enter tha value of a \n");
    scanf("%f", &a);
    for(i = 1; i <= 20; i++)
    {
        if(i % 2 == 0)
            S = S - (a / i);
        else
            S = S + (a / i);
    }
    printf("The sum of the series = %.3f", S);
}