//WAP to check whether a given number is prime or not. (Prime no. is a no. that is divisible by 1 and itself.)
#include<stdio.h>
void main()
{
    int n, c = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            c++;
    }
    if(c == 2)
        printf("%d is a Prime no.", n);
    else
        printf("%d is not a Prime no.", n);
}