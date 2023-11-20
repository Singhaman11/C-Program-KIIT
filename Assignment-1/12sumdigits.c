//WAP to input a 4 digits number and find out the sum of the digits of that number.
#include<stdio.h>
void main()
{
    int a, s = 0;
    printf("Enter a 4 digits number\n");
    scanf("%d", &a);
    s = a / 1000;
    a = a % 1000;
    s = s + (a / 100);
    a = a % 100;
    s = s + (a / 10);
    a = a % 10;
    s = s + a;
    printf("The sum of 4 digits = %d", s);
}