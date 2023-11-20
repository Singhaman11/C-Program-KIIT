/*Pascal’s Triangle in C
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
            printf(" ");
        /*for(int k = 1; k <= i; k++)
            printf("* ");       */
        printf("\n");
    } 
}