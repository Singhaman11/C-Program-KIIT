/*WAP to input three unequal numbers and display the second smallest number.
Sample input: 65,41,98
Sample output: 65   */
#include<stdio.h>
void main()
{
    int n1, n2, n3;
    printf("Enter the three unequal nos. \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if((n1 < n2 && n1 > n3) || (n1 > n2 && n1 < n3))
        printf("The second smallest no. is %d", n1);
    else if((n2 < n1 && n2 > n3) || (n2 > n1 && n2 < n3))
        printf("The second smallest no. is %d", n2);
    else
        printf("The second smallest no. is %d", n3);
}