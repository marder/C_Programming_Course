#include <stdio.h>

int main()
{

    // Create an array
    int numbers[5] = {1, 2, 3, 4, 5};

    // Access array using loop
    for (int index = 0; index < 5; ++index)
    {

        printf("%d\n", numbers[index]);
    }

    return 0;
}