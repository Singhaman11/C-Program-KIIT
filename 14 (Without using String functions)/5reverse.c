//WAP to reverse a string without using strrev() function.
#include<stdio.h>
void main()
{
    char st[50], st1[50], t;
    printf("Enter a string \n");
    gets(st);
    int l = 0;
    while(st[l] != '\0')
        l++;
    for(int i = 0; i < (l / 2); i++)
    {
        t = st[i];
        st[i] = st[l - i - 1];
        st[l - i - 1] = t;
    }
    printf("Reversed string: ");
    puts(st);
}