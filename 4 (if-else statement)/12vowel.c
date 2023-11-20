//WAP to enter a character and then determine whether it is a vowel or not.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a charcter \n");
    scanf("%c", &ch);
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') ||(ch == 'O') || (ch == 'U'))
        printf("The character is a Vowel");
    else
        printf("The character is a Constant");   
}