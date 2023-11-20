/*Full Pyramid Pattern in C
                A
            A   B   C
        A   B   C   D   E
    A   B   C   D   E   F   G
A   B   C   D   E   F   G   H   I
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j > 0; j--)
            printf(" \t");    
        for (int k = 1; k <= ((2 * i) - 1); k++)
        {
            printf("%c\t", ch);    
            ch++;
        }
        ch = 'A';
        printf("\n");
    }   
}