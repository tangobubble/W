//write a program to calculate sum of first n natural number
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}