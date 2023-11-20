//Find out the max. between 2 nos.
#include<stdio.h>
int max(int a, int b);
void main()
{
    int n, n1;
    printf("Enter 2 nos. \n");
    scanf("%d %d", &n, &n1);
    printf("Max no. = %d", max(n, n1));
}
int max(int a, int b)
{
    int c;
    return c = (a > b) ? a : b;
}