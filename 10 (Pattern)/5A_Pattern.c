/*Inverted Left Half Pyramid Pattern in C
*   *   *   *   *
    *   *   *   *
        *   *   *
            *   *
                *
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
            printf(" \t");
        for(int k = n; k >= i; k--)
            printf("*\t");
        printf("\n");
    }
}