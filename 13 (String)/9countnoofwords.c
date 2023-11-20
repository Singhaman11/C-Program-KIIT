//WAP to count total number of words in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50];
    int i, c = 0, l = 0;
    printf("Enter a string \n");
    gets(st);
    for(i = 0; i < strlen(st); i++)
    {
        if(st[i] == ' ')
            c++;
    }
    printf("No. of words = %d", c+1);
}