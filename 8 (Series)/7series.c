//WAP to find the sum of the given series : 1/2 + 1/4 + 1/8 + 1/16 + …………… upto nth term (n is user input)
#include<stdio.h>
#include<math.h>
void main()
{
    int i, n;
    float s;
    printf("Enter the nth term \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s = s + (1 / (pow(2,i)));
    }
    printf("Sum = %.2f \n", s);
}