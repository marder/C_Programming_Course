#include <stdio.h>

int main()
{

    for (int i = 1; i < 10; ++i)
    {

        if (i == 3)
        {
            break;
        }

        printf("%d\n", i);
    }

    printf("To jest poza pętlą.\n");

    return 0;
}