/*Hourglass Pattern in C
*   *   *   *   *   *   *   *   *   
    *   *   *   *   *   *   *       
        *   *   *   *   *           
            *   *   *                
                *                   
            *   *   *               
        *   *   *   *   *           
    *   *   *   *   *   *   *       
*   *   *   *   *   *   *   *   *   
*/
#include<stdio.h>
void main()
{
    int n, up;
    printf("Enter the no. of rows \n"); 
    scanf("%d", &n);
    if((n % 2) == 1)
        n = n + 1;
    up = n / 2;
    for(int i = up; i >= 1; i--)
    {
        for(int j = up; j > i; j--)
            printf(" \t");
        for(int k = 1; k <= ((2 * i) - 1); k++)
            printf("*\t");
        printf("\n");
    }
    for(int l = 2; l <= up; l++)
    {
        for(int m = l; m < up; m++)
            printf(" \t");
        for(int o = 1; o <= ((2 * l) - 1); o++)
            printf("*\t");
        printf("\n");
    }    
} 