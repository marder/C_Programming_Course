#include <stdio.h>

int main()
{

    int numbers[6] = {51, 69, 70, 21, 65, 11};
    int smallest = numbers[0];

    for (int i = 0; i < 6; ++i)
    {
        if (smallest >= *(numbers + i))
        {
            smallest = *(numbers + i);
        }
    }

    printf("%d\n", smallest);

    return 0;
}