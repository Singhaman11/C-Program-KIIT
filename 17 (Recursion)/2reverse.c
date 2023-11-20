//WAP to find reverse of any number using recursion.
#include<stdio.h>
int reverse(int a);
void main()
{
    int n, r;
    printf("Enter a no. \n");
    scanf("%d", &n);
    r = reverse(n);
    printf("Reverse of no. = %d", r);
}
int reverse(int a)
{
    static int rev = 0;
    int rem = 0;
    if(a != 0)
    {
        rem = a % 10;
        rev = (rev * 10) + rem;
        reverse(a / 10);
    }
    else
        return rev;
}