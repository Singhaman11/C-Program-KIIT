//WAP to check whether a given number is even or odd and display suitable message using if-else statement. 
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    if(a % 2 == 0)
        printf("%d is an Even number", a);
    else
        printf("%d is a Odd number", a);   
}