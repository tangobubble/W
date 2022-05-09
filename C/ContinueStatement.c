#include <stdio.h>
int main()
{
    int i = 1, j = 1;
    while (i < 5)
    {
        while (j < 5)
        {
            ++j;
            if (i == j)
                continue;
            else
                printf("%d\t%d\n", i, j);
        }
        ++i;
    }
    return 0;
}