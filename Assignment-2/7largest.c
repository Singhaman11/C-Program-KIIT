//WAP to find out the largest among three numbers using ternary operator.
#include<stdio.h>
void main()
{
    int a, b, c, l, l1;
    printf("Enter three numbers \n");
    scanf("%d %d %d", &a, &b, &c);
    l = (a > b) ? a : b;
    l1 = (l > c) ? l : c;
    printf("The largest number is %d", l1);
}