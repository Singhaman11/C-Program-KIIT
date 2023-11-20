//WAP to check whether a given number is positive or negative and display suitable message using if-else statement. 
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    if(a >= 0)                //Check whether the number is positive or negative
        printf("%d is a Positive number", a);
    else
        printf("%d is a Negative number", a);   
}