/*WAP to accept total marks of 10 students in a 1D array totalmarks[ ].
Calculate and print:
a) The average of the total marks obtained by 10 students.
    [average = (sum of total marks of all the students)/10]
b) Deviation of each student's total marks with the average.
    [deviation = total marks of a student - average]                 */
#include<stdio.h>
void main()
{
    int a[10];
    float avg = 0, dev = 0, s = 0;
    printf("Enter 10 values \n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        s = s + a[i];
    }
    avg = s / 10;
    printf("Average of 10 students = %.2f \n" , avg);
    printf("Deviation of 10 students = ");
    for(int j = 0; j < 10; j++)
    {
        dev = a[j] - avg;
        printf("%.2f, ", dev);
    }
}