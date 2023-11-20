/*WAP to display the fibonacci series upto 10th term.
Fibonacci series is: 0, 1, 1, 2, 3, ………………….
T1 = 0
T2 = 1
Tn = Tn-1 + Tn-2      */
#include<stdio.h>
void main()
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