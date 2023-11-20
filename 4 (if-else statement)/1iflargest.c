//WAP to display the largest number between two numbers using simple if statement.
#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("The largest number is %d", a);
    if(b > a)
        printf("The largest number is %d", b);   
}