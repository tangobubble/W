#include <stdio.h>

int main()
{
    int c, nl, nc;
    nl = 0, nc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
             ++nl;
        }
        ++nc;
    }
    printf("%d\n", nl);
    printf("%d\n", nc);
}