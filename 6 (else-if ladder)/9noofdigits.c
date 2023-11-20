/*WAP to enter an integer number as input and check whether the number entered is a one digit number, a two digit number or a three digit number. Now perform these tasks:
• If it is an one digit number then display its square.
• If it is a two digit number then display its square root.
• If it is a three digit number then display its cube root.
Otherwise, display the message “The number entered is more than three digits”.     */
#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Enter an integer no. \n");
    scanf("%d", &n);
    if(n >= 0 && n < 10)                    //if((n / 10) == 0)
        printf("Square = %d", (n * n));
    else if(n >= 10 && n < 100)            //else if((n / 100) == 0) 
        printf("Suare root = %.2f", sqrt(n));
    else if(n >= 100 && n < 1000)          //else if((n / 1000) == 0)
        printf("Cube root = %.2f", cbrt(n));
    else
        printf("The number entered is more than three digits");
}