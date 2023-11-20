//WAP to find the largest between two numbers using ternary operator.
#include<stdio.h>
void main()
{
    int n1, n2, l;
    printf("Enter two numbers \n");
    scanf("%d %d", &n1, &n2);
    l = (n1 > n2) ? n1 : n2;
    printf("The largest number is %d", l);
}