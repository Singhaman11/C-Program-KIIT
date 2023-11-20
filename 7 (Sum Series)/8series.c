/*WAP to find the sum of the given series: 
S = x/2 + x/5 + x/8 + x/11 + ...... + x/20      */
#include<stdio.h>
#include<math.h>
void main()
{
    int x;
    float S, i;
    printf("Enter tha value of x \n");
    scanf("%d", &x);
    for(i = 2; i <= 20; i= i+3)
    {
        S = S + (x / i);
    }
    printf("The sum of the series = %.3f", S);
}