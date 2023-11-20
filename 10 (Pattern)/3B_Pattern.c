/*Full Pyramid Pattern in C
                1
            1   2   3
        1   2   3   4   5
    1   2   3   4   5   6   7
1   2   3   4   5   6   7   8   9   
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j > 0; j--)
            printf(" \t");    
        for (int k = 1; k <= ((2 * i) - 1); k++)
            printf("%d\t", k);    
        printf("\n");
    }   
}