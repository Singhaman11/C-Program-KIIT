//WAP to check whether a given number is positive or negative and display suitable message using simple if statement.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    if(a >= 0)
        printf("%d is a Positive number", a);
    if(a < 0)
        printf("%d is a Negative number", a);   
}