//WAP to check whether a number is even or odd using ternary operator.
#include<stdio.h>
void main()
{
    int n, t;
    printf("Enter a number \n");
    scanf("%d", &n);
    t = (n % 2 == 0) ? printf("No. is Even") : printf("No. is Odd");
}