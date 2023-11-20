//WAP to find the sum of the given series : 1 + (1*2) + (1*2*3) + …………………+ (1*2*3*4*……*n) (n is user input)
#include<stdio.h>
void main()
{
    int i, j, n;
    float s, p = 1;
    printf("Enter the nth term \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            p = p * j;
        }
        s = s + p;
        p = 1;
    }
    printf("Sum = %.2f \n", s);
}