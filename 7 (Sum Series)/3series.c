/*WAP to find the sum of the given series: 
S = (a*2) + (a*3) + ...... + (a*20)     */
#include<stdio.h>
void main()
{
    int a;
    float S, i;
    printf("Enter tha value of a \n");
    scanf("%d", &a);
    for(i = 2; i <= 20; i++)
    {
        S = S + (a * i);
    }
    printf("The sum of the series = %.3f", S);
}