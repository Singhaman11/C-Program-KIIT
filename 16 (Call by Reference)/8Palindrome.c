//WAP to check whether a number is palindrome or not using function.
#include<stdio.h>
int palindrome(int *a);
void main()
{
    int n, c = 0, n1 = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    n1 = n;
    c = palindrome(&n);
    if(c == n1)
        printf("No. is palindrome");
    else
        printf("No. is not palindrome");
}
int palindrome(int *a)
{
    int r = 0;
    while(*a != 0)
    {
        r = (r * 10) + (*a % 10);
        *a = *a / 10;
    }
    return r;
}