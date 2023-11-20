//WAP to check whether a number is prime or not using function.
#include<stdio.h>
int prime(int a);
void main()
{
    int n, c;
    printf("Enter a no. \n");
    scanf("%d", &n);
    c = prime(n);
    if(c == 2)
        printf("No. is prime");
    else
        printf("No. is not prime");
}
int prime(int a)
{
    int c = 0;
    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0)
            c++;
    }
    return c;
}