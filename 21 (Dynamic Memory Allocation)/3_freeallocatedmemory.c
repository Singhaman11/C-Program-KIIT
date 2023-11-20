//WAP to allocate memory of size n, where n is entered by the user.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    int n = 0;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++)
        printf("%d\t", ptr[i]);
    free(ptr);
}