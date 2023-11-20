#include<stdio.h>
int reverse(int a);
void main()
{
    int m, n, r;
    printf("Enter the value of m & n \n");
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n; i++)
    {
        r = reverse(i);
        printf("%d, ", r);
    }
}
int reverse(int a)
{
    int rv = 0;
    while(a != 0)
    {
        rv = (rv * 10) + (a % 10);
        a = a / 10;
    }
    return rv;
}