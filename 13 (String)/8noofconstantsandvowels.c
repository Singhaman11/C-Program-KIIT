//WAP to count total number of vowels and consonants in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50];
    int c = 0, v = 0;
    printf("Enter a string \n");
    gets(st);
    for(int i = 0; i < strlen(st); i++)
    {
        if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
            v++;
        else if((st[i] >= 'A' && st[i] <= 'Z') || (st[i] >= 'a' && st[i] <= 'z'))
            c++;
    }
    printf("No. of vowels = %d \nNo. of constants = %d", v, c);     
}