/*WAP to search a given number using linear search.
Input array: 34,23,11,1,12,13,5,6,7,8
Output: 1 is present at position 4
Output: 100 is not present in the list          */
#include<stdio.h>
void main()
{
    int a[10], c = 0, n;
    printf("Enter 10 values \n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("Enter the no. to be searched \n");
    scanf("%d", &n);
    for(int j = 0; j < 10; j++)
    {
        if(n == a[j])
        {
            printf("%d is present at position %d", n, (j+1));
            c++;
        }
    }
    if(c == 0)
        printf("%d is not present in the list", n);
}