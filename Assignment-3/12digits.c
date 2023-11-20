//A two digit number can be obtained by using the expression (10a+b), where a and b are the ten’s and unit’s digits respectively. The number after reversing the digits will be (10b+a). WAP to input two digits of a number (a and b) and display the result when the sum of number and the reversed number is divided by the difference between its digits.
#include<stdio.h>
void main()
{
    int a, b, n, nr, d;
    printf("Enter two digits of a number(a & b) \n");
    scanf("%d %d", &a, &b);
    n = (10 * a) + b;
    nr = (10 * b) + a;
    d = (a > b) ? (a - b) : (b - a);
    printf("Sum of no. & reversed no. is divided by the difference between its digits = %d", ((n + nr) / d));
}