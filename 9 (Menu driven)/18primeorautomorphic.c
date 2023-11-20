/*Write a menu driven C program to accept a number from the user and check whether it is a Prime number or an Automorphic number.
a) Prime number: (A number is said to be prime, if it is only divisible by 1 and itself)
   Example: 3,5,7,11
b) Automorphic number: (Automorphic number is the number which is contained in the last digit(s) of its square.)
   Example: 25 is an Automorphic number as its square is 625 and 25 is present as the last two digits.      */
#include<stdio.h>
#include<math.h>
void main()
{
    int n, n1, c = 0, ch, sq = 0, t = 1;
    printf("Enter a no. \n");
    scanf("%d", &n);
    printf("Enter 1 for Prime and 2 for Automorphic no. \n");
    scanf("%d", &ch);
    n1 = n;
    if(ch == 1)
    {
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
                c++;
        }
        if(c == 2)
            printf("%d is a Prime no.", n);
        else
            printf("%d is not a Prime no.", n);
    }
    else if(ch == 2)
    {
        sq = n * n;
        printf("%d \n", sq);
        while(n != 0)
        {
            n = n / 10;
            t = t * 10;
        }
        if(n1 == (sq % t))
            printf("%d is an Automorphic no.", n1);
        else
            printf("%d is not an Automorphic no.", n1);
    }           
}