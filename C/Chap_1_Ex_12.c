#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            printf("\n");
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
//            printf("\n");
        }
/*         if (c == ' ' || c == '\n' || c == '\t')
            ++nw;
 */ 
    }
    printf("line: %d word: %d character: %d\n", nl, nw, nc);
}