//write a program to add two numbers
#include <stdio.h>
int main()
{
    int i, j, sum;
    printf("Find the sum of two numbers\n");
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= 5; ++j)
        {
            sum = i + j;"\t";
            printf("i = %d, j = %d, Sum = %d\n", i, j, sum);
        }
        return 0;
    }
}