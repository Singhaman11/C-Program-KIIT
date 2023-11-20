//WAP to check whether a number is even or odd using functions.
#include<stdio.h>
int check(int a);
void main()
{
    int n, c;
    printf("Enter a no. \n");
    scanf("%d", &n);
    c = check(n);
    if(c == 1)
        printf("No. is even");
    else
        printf("No. is odd");
}
int check(int a)
{
    int c;
    c = (a % 2 == 0) ? 1 : 0;
    return c;
}