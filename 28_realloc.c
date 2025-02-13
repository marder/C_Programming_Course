#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *pt;

    pt = (int *)malloc(2 * sizeof(int));

    printf("Allocated Memory\n");
    for (int i = 0; i < 2; ++i)
    {
        printf("%p\n", (pt + i));
    }

    pt = realloc(pt, 4 * sizeof(int));

    printf("New Memory\n");
    for (int i = 0; i < 4; ++i)
    {
        printf("%p\n", (pt + i));
    }

    return 0;
}