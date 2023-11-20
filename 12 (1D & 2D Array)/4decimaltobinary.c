//WAP to convert a decimal number into binary. 
#include<stdio.h>
void main()
{
    int n, a[10], i;
    printf("Enter the no. to be converted \n");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i-1; i >= 0; i--)
        printf("%d",a[i]);    

}

/* 
#include<stdio.h>
void main()
{
    int n, r, m = 1, bin = 0;
    printf("Enter the Number: \n");
    scanf("%d",&n);
    while(n != 0)
    {
        r = n % 2;
        bin = bin + (r * m);
        m = m * 10;
        n = n / 2;
    }
    printf("Binary Value: %d \n", bin);
}
 */