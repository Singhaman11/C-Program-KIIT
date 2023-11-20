//WAP to check whether a triangle is valid or not if three sides are given. 
#include<stdio.h>
void main()
{
    int A, B, C;
    printf("Enter the sides of a triangle \n");
    scanf("%d %d %d", &A, &B, &C);
    if((A+B > C) || (B+C > A) || (A+C > B))
        printf("The triangle is valid");
    else
        printf("The triangle is not valid");
}