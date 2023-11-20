/*Full Pyramid Pattern in C
                *
            *   *   *
        *   *   *   *   *
    *   *   *   *   *   *   *
*   *   *   *   *   *   *   *   *
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows \n"); 
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
            printf(" \t");
        for(int k = 1; k <= ((2 * i) - 1); k++)
            printf("*\t");
        printf("\n");
    }
}    