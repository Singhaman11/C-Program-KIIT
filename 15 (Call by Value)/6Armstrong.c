//WAP to check whether a number is Armstrong or not using function. 
#include<stdio.h>
#include<math.h>
int armstrong(int a, int b);
void main()
{
    int ck, n, C = 0, n1;
    printf("Enter a no. \n");
    scanf("%d", &n);
    n1 = n;
    while(n != 0)
    {
        n = n / 10;
        C++;
    }
    ck = armstrong(n1, C);
    if(n1 == ck)
        printf("No. is Armstrong");
    else
        printf("No. is not Armstrong");
}
int armstrong(int a, int C)
{
    float ck = 0.0;
    int c;
    while(a != 0)
    {
        ck = ck + pow((a % 10), C);
        a = a / 10;
    }
    // c = (int)ck;
    return ck;
}