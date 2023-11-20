//WAP to allocate memory to store 5 prices.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));             
    //malloc(5 * sizeof(float)) brings the memory address of pointer of void datatype
    ptr[0] = 150;
    ptr[1] = 100;
    ptr[2] = 240;
    ptr[3] = 500;
    ptr[4] = 80;
    for(int i = 0; i < 5; i++)
        printf("%.2f\n", ptr[i]);
}