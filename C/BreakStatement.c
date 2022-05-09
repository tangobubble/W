#include <stdio.h>
int main()
{
    int i = 1, j = 1;
    while(i < 5)
    {
        while(j < 5)
        {
            if(i == j)
            break;
            else
            printf("%d%d\n", i, j);
            ++j;
        }
        ++i;
    }
    return 0;
}