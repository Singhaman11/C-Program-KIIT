/*Floyd’s Triangle in C
1          
2   3        
4   5   6      
7   8   9   10   
*/
#include<stdio.h>
void main()
{
    int n, t = 1;
    char ch;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {                  
        for(int j = 1; j <= i; j++)
        {
            printf("%d\t", t);
            t++;
        }
        printf("\n");
    }
}