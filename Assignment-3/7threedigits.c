/*WAP to input a three digit number and display all the digits by using arithmetic operators.
Sample Input: 
    472
Sample Output: 
    4
    7
    2*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    printf("%d \n", (n / 100));
    n = n % 100;
    printf("%d \n", (n / 10));
    printf("%d \n", (n % 10));
}