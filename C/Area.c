#include <stdio.h>

int main()
{
    int x, y, z, older;
    scanf("%d%d%d", x, y, z);
     if (x > y && x > z)
        printf("x is older\n");
    else if (y > x && y > z)
        printf("y is older\n");
    else(z > x && z > y)
        printf("z is older\n");