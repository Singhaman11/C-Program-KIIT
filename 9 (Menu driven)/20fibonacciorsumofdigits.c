/*Using a switch statement, write a menu driven program to:
a) Generate and display the first 10 terms of the Fibonacci series 0, 1, 1, 2, 3, 5
   (The first two Fibonacci numbers are 0 and 1, and each subsequent number is the sum of the previous two.)
b) Find the sum of the digits of an integer that is input.
   Sample Input: 15390
   Sample Output: Sum of the digits = 18
For an incorrect choice, an appropriate error message should be displayed.
*/
#include<stdio.h>
void main()
{
    int ch;
    printf("Enter 1 to generate the Fibonacci series \nEnter 2 to find the sum of the digits of an integer that is input \n");
    scanf("%d", &ch);
    if(ch == 1)
    {
        int T1 = 0, T2 = 1, Tn;
        printf("Fibonacci series is: %d, %d, ", T1, T2);
        for(int i = 1; i <= 8; i++)
        {
            Tn = T1 + T2;
            T1 = T2;
            T2 = Tn;
            if(i < 8)
                printf("%d, ", Tn);
            else
                printf("%d", Tn);
        }
    }
    else if(ch == 2)
    {
        int n, s = 0;
        printf("Enetr an integer \n");
        scanf("%d", &n);
        while(n > 0)
        {
            s = s + (n % 10);
            n = n / 10;
        }
        printf("Sum of the digits of an integer = %d \n", s);
    }
    else
        printf("INVALID CHOICE");
}  