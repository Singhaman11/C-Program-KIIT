/*Using switch statement, write a menu driven program for the following:
a) To find the sum of the series given below:
   S = x^1 - x^2 + x^3 - x^4 + x^5 - ............ - x^20; where x = 2
b) To display the series:
   1, 11, 111, 1111, 11111
For an incorrect option, an appropriate error message should be displayed.
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int ch;
    printf("Enter 1 to find the sum of the series \nEnter 2 to display the series \n");
    scanf("%d", &ch);
    if(ch == 1)
    {
        int x = 2, s = 0;
        for(int i = 1; i <= 20; i++)
        {
            if((i % 2) == 1)
                s = s + pow(x,i);
            else
                s = s - pow(x,i);
        }
        printf("Sum of the series = %d \n", s);
    }
    else if(ch == 2)
    {
        int n;
        printf("Enter the no. of terms \n");
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
                printf("1");
            printf(", ");
        }
    }
    else
        printf("INCORRECT OPTION");
}  