#include<stdio.h>
void main()
{
    int n, s = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    while(n > 0)
    {
        s = s + n%10;
        n = n / 10;
    }
    printf("Sum of digits = %d", s);
}