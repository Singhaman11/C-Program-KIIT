//WAP to check whether a number is Armstrong or not using function. 
#include<stdio.h>
#include<math.h>
int armstrong(int a, int b);
void main()
{
    int ck, n, C, n1;
    printf("Enter a no. \n");
    scanf("%d", &n);
    n = n1;
    while(n != 0)
    {
        n = n / 10;
        C++;
    }
    ck = armstrong(n1, C);
    if(n == ck)
        printf("No. is Armstrong");
    else
        printf("No. is not Armstrong");
}
int armstrong(int a, int b)
{
    int c = 0;
    int r;
    while(a != 0)
    {
        r=a%10;
        c = c + r*r*r;
        a = a / 10;
    }
    return c;
}