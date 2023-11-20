//WAP to allocate memory to store first 5 odd nos., then dynamically reallocate it to store first 6 even nos.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for(int i = 0; i < 5; i++)
        printf("Odd no. %d is %d\n", (i + 1), ptr[i]);
    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    for(int i = 0; i < 6; i++)
        printf("Even no. %d is %d\n", (i + 1), ptr[i]);
}