#include <stdio.h>

void dec_to_binary(int decimal)
{

    if (decimal == 0)
    {
        return;
    }

    dec_to_binary(decimal / 2);

    printf("%d", decimal % 2);
}

int main()
{

    dec_to_binary(666);
    printf("\n");
    return 0;
}