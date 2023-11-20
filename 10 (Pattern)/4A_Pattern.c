/*Inverted Right Half Pyramid Pattern in C
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
        for (int j = n; j >= i; j--)
            printf("*\t");
        printf("\n");
    }
}