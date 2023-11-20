/*Using switch statement, write a menu driven program to:
a) Find and display all the factors of a number input by the user. (Including 1 and the excluding the number itself.)
   Example: Sample Input: n = 15
            Sample Output: 1, 3, 5
b) Find and display the factorial of a number input by the user. (The factorial of a non-negative integer n, denoted by n! is the product of all integers less than or equal to n.)
   Example: Sample Input: n = 5
            Sample Output: 5! = 1*2*3*4*5 = 120
For an incorrect choice, an appropriate error message should be displayed.
*/
#include<stdio.h>
void main()
{
    int ch;
    printf("Enter 1 to display the factors of a no. \nEnter 2 to find the factorial of the no. \n");
    scanf("%d", &ch);
    if(ch == 1)
    {
        int n;
        printf("Eneter a no. \n");
        scanf("%d", &n);
        for(int i = 1; i < n; i++)
        {
            if((n % i) == 0)
                printf("%d, ", i);
        }
    }
    else if(ch == 2)
    {
        int n, f = 1;
        printf("Enter a no. \n");
        scanf("%d", &n);
        for(int i = n; i >= 1; i--)
            f = f * i;
        printf("Factorial of %d = %d ", n, f);
    }
    else
        printf("INCORRECT CHOICE");
}  