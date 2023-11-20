//WAP to find total number of alphabets, digits, or special character in a string.
//[SPACE is not a special character.]
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50];
    int a = 0, d = 0, sc = 0;
    printf("Enter a string \n");
    gets(st);
    for(int i = 0; i < strlen(st); i++)
    {
        if((st[i] >= 'A' && st[i] <= 'Z') || (st[i] >= 'a' && st[i] <= 'z'))
            a++;
        else if(st[i] >= '0' && st[i] <= '9')
            d++;
        else if(st[i] != ' ')
            sc++;
    }
    printf("No. of alphabets = %d \nNo. of digits = %d \nNo. of special characters = %d", a, d, sc);     
}