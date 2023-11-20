//WAP check whether a triangle is right-angled or not if length of three sides is given.
#include<stdio.h>
void main()
{
    int a, b, c, A, B, C;
    printf("Enter the sides of triangle \n");
    scanf("%d %d %d", &a, &b, &c);
    A = a * a;     //Square of 1st side
    B = b * b;     //Square of 2nd side
    C = c * c;     //Square of 3rd side
    if((A+B == C) || (B+C == A) || (A+C == B))
        printf("The triangle is a right angled triangle");
    else
        printf("The triangle is not a right angled triangle");
}