/*Write a menu driven C program to perform the following tasks by using Switch case statement:
a) To print the series:  0, 3, 8, 15, 24, ............ to n terms. (Value of 'n' is to be an input by the user)
b) To find the sum of the series:  S = (1/2) + (3/4) + (5/6) + (7/8) + ........... + (19/20)
*/
#include<stdio.h>
void main()
{
    int ch;
    float s = 0;
    printf("Enter 1 to print the series \nEnter 2 to find the sum of the series \n");
    scanf("%d", &ch);
    if(ch == 1)
    {
        int n;
        printf("Enter the no. of terms \n");
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            if(i < n)
                printf("%d, ", ((i * i) - 1));
            else
                printf("%d", ((i * i) - 1));
        }
    }
    else if(ch == 2)
    {
        for(int i = 1; i < 20; i++)
        {
            s = s + (i / (i + 1.0));
            i++;
        }
        printf("Sum = %.2f \n", s);
    }
    else
        printf("INVALID CHOICE");
}    