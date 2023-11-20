//WAP to display the largest among three numbers using nested if-else.
#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
    {
        if(a > c)
            printf("The largest number is %d", a);
        else
            printf("The largest number is %d", c);
    }
    else
    {
        if(b > a)
            printf("The largest number is %d", b);
        else
            printf("The largest number is %d", c);   
    }
}