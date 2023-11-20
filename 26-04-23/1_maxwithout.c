//Find out the max. between 2 nos.(Without return type & with arguments)
#include<stdio.h>
int max();
void main(int a, int b)
{
    int n, n1;
    printf("Enter 2 nos. \n");
    scanf("%d %d", &n, &n1);
    max(n, n1);
}
int max(int a, int b)
{
    printf("Max no. = %d", ((a > b) ? a : b));
}