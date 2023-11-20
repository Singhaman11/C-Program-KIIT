/*. Diamond Pattern in C
                A  
            A   B   C
        A   B   C   D   E
    A   B   C   D   E   F   G
A   B   C   D   E   F   G   H   I
    A   B   C   D   E   F   G
        A   B   C   D   E
            A   B   C
                A  
*/
#include<stdio.h>
void main()
{
    int n, up;
    char ch = 'A';
    printf("Enter the no. of rows \n"); 
    scanf("%d", &n);
    if((n % 2) == 1)
        n = n + 1;
    up = n / 2;
    for(int i = 1; i <= up; i++)
    {
        for(int j = up; j > i; j--)
            printf(" \t");
        for(int k = 1; k <= ((2 * i) - 1); k++)
        {
            printf("%c\t", ch);
            ch++;
        }
        ch = 'A';
        printf("\n");
    }
    for(int l = (up - 1); l >= 1; l--)
    {
        for(int m = (up - 1); m >= l; m--)
            printf(" \t");
        for(int o = 1; o <= ((2 * l) - 1); o++)
        {
            printf("%c\t", ch);
            ch++;
        }
        ch = 'A';
        printf("\n");
    }    
} 