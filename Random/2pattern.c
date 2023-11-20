/*WAP to print the following pattern:
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
void main()
{
    int i, j, k, n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = n; j > i; j--)
            printf(" ");
        for(k = 1; k <= i; k++)
            printf("* ");
        printf("\n");
    }
}