//WAP to check whether a number is positive or negative using ternary operator.
#include<stdio.h>
void main()
{
    int n, t;
    printf("Enter a number \n");
    scanf("%d", &n);
    t = (n >= 0) ? printf("No. is Positive") : printf("No. is Negative");
}