#include <stdio.h>

int main()
{

    int count = 1;

    while (count <= 10)
    {
        printf("Wnętrze pętli while...\n");
        printf("%d\n",count);
        count++;
    }

    return 0;
}