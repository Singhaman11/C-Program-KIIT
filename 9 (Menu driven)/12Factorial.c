/*WAP to calculate and display the factorial of a number. 
Example: Factorial of 5 is 5*4*3*2*1 = 120      */
#include<stdio.h>
void main()
{
    int n, f = 1;
    printf("Enter a no. \n");
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
    {
        f = f * i;
    }
    printf("Factorial of %d = %d ", n, f);
}