/*In an examination, the grades are awarded to the students in ‘Science’ according to the average marks obtained in the examination.
     Marks                                 Grades
80% and above                           Distinction
60% or more but less than 80%           First Division
45% or more but less than 60%           Second Division
40% or more but less than 45%           Pass
Less than 40%                           Promotion not granted 
WAP to input marks in Physics, Chemistry and Biology. Calculate the average marks. Display the average marks and the grade obtained.*/
#include<stdio.h>
void main()
{
    int P, C, B;
    float av;
    printf("Enter the marks of Physics, Chemistry & Biology \n");
    scanf("%d %d %d", &P, &C, &B);
    av = (P + C + B) / 3.0;
    printf("The average of three subjects = %.2f \n", av);
    if(av >= 80)
        printf("Distinction");
    else if(av >= 60 && av < 80)
        printf("First division");
    else if(av >= 45 && av < 60)
        printf("Second division");
    else if(av >= 40 && av < 45)
        printf("Pass");
    else
        printf("Promotion not granted");
}