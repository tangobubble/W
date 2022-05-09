#include <stdio.h>

int main(int argc, char *argv[])
{
    int c;
    while ((c = getchar()), c != EOF)
    {
        printf(" %d ", c != EOF);
        putchar(c);
    }
    printf("\n%d\n", c != EOF);
}
