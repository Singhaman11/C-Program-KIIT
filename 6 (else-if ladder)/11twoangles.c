/*WAP to accept two angles. Calculate and display whether they are ‘Complementary Angles’ or ‘Supplementary Angles’ as per the user’s choice.
[Hint: Enter 'c for complementary or 's' for supplementary]   */
#include<stdio.h>
#include<math.h>
void main()
{
    float a1, a2;
    char u;
    printf("Enter two angles \n");                                            //printf("Enter 'c' for complementary or 's' for supplementary \n");
    scanf("%f %f", &a1, &a2);                                                 //scanf("%c", &u);
    printf("Enter 'c' for complementary or 's' for supplementary \n");        //printf("Enter two angles \n");
    scanf(" %c", &u);                                                         //scanf("%f %f", &a1, &a2);  
    if(u == 'c')
    {
        if((a1 + a2) == 90)
            printf("%.2f & %.2f are complemenatry angles \n", a1, a2);
        else
            printf("%.2f & %.2f are not a complemenatry angles \n", a1, a2);
    }   
    else if(u == 's')
    {
        if((a1 + a2) == 180)
            printf("%.2f & %.2f are supplemenatry angles \n", a1, a2);
        else
            printf("%.2f & %.2f are not a supplemenatry angles \n", a1, a2);
    }
    else
        printf("Invalid input");
}