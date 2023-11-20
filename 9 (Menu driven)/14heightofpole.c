//In order to reach the top of a pole, a monkey in his first attempt reaches to a height of 5 feet and in the subsequent jumps, he slips down by 2% of the height attained in the previous jump. The process repeats and finally the monkey reaches the top of the pole. WAP to input height of the pole. Calculate and display the number of attempts the monkey makes to reach the top of the pole.
#include<stdio.h>
void main()
{
    int h, j = 5, c = 1, s = 0;
    printf("Enter the height of the pole \n");
    scanf("%d", &h);
    while(j <= h)
    {
        s = (j * 2) / 100;
        j = j - s + 5;
        c++;
    } 
    printf("The no. of attempts the monkey makes to reach the top of the pole = %d", c);
}