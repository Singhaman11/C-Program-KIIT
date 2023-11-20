//WAP to swap two numbers using function.
#include<stdio.h>
int palindrome(int a, int b);
void main()
{
    int n, n1, c;
    printf("Enter two no. \n");
    scanf("%d %d", &n, &n1);
    c = palindrome(n, n1);
    if(c == n)
        printf("No. is palindrome");
    else
        printf("No. is not palindrome");
}
int palindrome(int a, int b)
{
    int r = 0;
    while(a != 0)
    {
        r = (r * 10) + (a % 10);
        a = a / 10;
    }
    return r;
}