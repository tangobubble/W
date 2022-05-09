#include <stdio.h>

int main()
{
    int a, b, c, i = 1, n;
    printf("enter a number\n");
    scanf("%d", &n);
    a = 0;
    b = 1;
    c = 0;
    for (; i <= n; ++i)
    {
        printf("%d\t", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}