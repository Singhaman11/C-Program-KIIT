/*Write a menu driven C program to accept a number from the user and check whether it is a Palindrome or a Perfect number.
(a) Palindrome number: (A number is a Palindrome which when read in reverse order is same as in the right order)
    Example: 11, 101, 151 etc.
(b) Perfect number: (A number is called Perfect if it is equal to the sum of its factors other than the number itself.)
    Example: 6 = 1 + 2 + 3       */
#include<stdio.h>
void main()
{
    int n, r = 0, n1 = 0, ch, s = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    printf("Enter 1 for Palindrome and 2 for Perfect no. \n");
    scanf("%d", &ch);
    n1 = n;
    if(ch == 1)
    {
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
    else if(ch == 2)
    {
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
                s = s + i;
        }
        if(n1 == s)
            printf("%d is a Perfect no.", n1);
        else
            printf("%d is not a Perfect no.", n1);
    }
}