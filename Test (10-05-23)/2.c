// WAP to take 1 integer no. as input & perform the repetetive sum of the digit until we get a single digit using function.
#include<stdio.h>
int sum(int);
void main()
{
    int n, s = 0;
    printf("Enter an integer \n");
    scanf("%d", &n); 
    s = sum(n);
    printf("Sum of digit = %d", s);
}
int sum(int a)
{
    int s = 0;
    while(a != 0)
    {
        s = s + (a % 10);
        a = a / 10;
    }
    if(s / 10 == 0)
        return s;
    else
        sum(s);
}