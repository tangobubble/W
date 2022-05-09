#include <stdio.h>

int main()
{
    int n, num, i = 1, add = 0, remainder = 1;
    unsigned long fact;
    printf("enter a number to check if its strong or not\n");
    scanf("%d", &n);
    num = n;
    for (; n != 0;)
    {
        remainder = n % 10;
        fact = 1;
        for (i = 1; i <= remainder; ++i)
        {
            fact = fact * i;
        }
        add = add + fact;
        n = n / 10;
    }
    if (add == num)
        printf("%d is a strong number\n", num);
    else
        printf("%d is not a strong number\n", num);
}
