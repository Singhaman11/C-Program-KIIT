//Find the factorial of a no.
#include<stdio.h>
int factorial(int a);
void main()
{
    int n;
    printf("Enter a nos. \n");
    scanf("%d", &n);
    printf("Factorial of %d = %d ", n, factorial(n));
}
int factorial(int a)
{
    int f = 1;
    for(int i = 1; i <= a; i++)
        f = f * i;
    return f;
}