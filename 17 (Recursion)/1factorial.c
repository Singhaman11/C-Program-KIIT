//WAP to find the factorial of a number using recursion.
#include<stdio.h>
int factorial(int);
void main()
{
    int n, f;
    printf("Enter a no. \n");
    scanf("%d", &n);
    f = factorial(n);
    printf("Factorial of no. = %d", f);
}
int factorial(int a)
{
    int f;
    if(a == 0)
        f = 1;
    else
        f = a * factorial(a - 1);
    return f;
}