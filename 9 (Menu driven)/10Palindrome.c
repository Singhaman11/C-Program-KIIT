/*WAP to check whether a given number is palindrome or not.
(A palindromic number is a number that remains the same when its digits are reversed.)      
Example: 18981      */
#include<stdio.h>
void main()
{
    int n, r = 0, n1 = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    n1 = n;
    while(n != 0)
    {
        r = (r * 10) + (n % 10);
        n = n / 10;
    }
    if(n1 == r)
        printf("%d is a Palindromic no.", n1);
    else
        printf("%d is not a Palindromic no.", n1);
}