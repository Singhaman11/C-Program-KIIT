/*Right Half Pyramid Pattern in C
1
1   2
1   2   3
1   2   3   4
1   2   3   4   5
*/
#include<stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%d\t", j);
        printf("\n");
    }
}