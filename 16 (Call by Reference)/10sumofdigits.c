//WAP to find the sum of digits of a number using function.
#include<stdio.h>
int sum(int *a);
void main()
{
    int n, s = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    s = sum(&n);
    printf("Sum of digits of no. = %d", s);
}
int sum(int *a)
{
    int s = 0;
    while(*a != 0)
    {
        s = s + (*a % 10);
        *a = *a / 10;
    }
    return s;
}