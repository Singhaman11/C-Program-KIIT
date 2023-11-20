/*WAP to input marks in English, Maths and Science of 10 students who have passed ICSE Examination 2014. Now, perform the following tasks:
(a) Number of students, who have secured 95% or more in all the subjects.
(b) Number of students, who have secured 90% or more in English, Maths and Science.
*/
#include<stdio.h>
void main()
{
    int e, m, s, i, c95 = 0, c90 = 0, sum = 0;
    printf("Enter marks in English, Maths and Science of 10 students \n");
    for(i = 1; i <= 2; i++)
    {
        scanf("%d %d %d", &e, &m, &s);
        sum = e + m + s;
        if((sum / 3) >= 95)
            c95++;
        else if((sum / 3) >= 90 && (sum / 3) < 95)
            c90++;
    }
    printf("Number of students, who have secured 95 or more in all the subjects = %d \n", c95);
    printf("Number of students, who have secured 90 or more in English, Maths and Science = %d ", c90);
}