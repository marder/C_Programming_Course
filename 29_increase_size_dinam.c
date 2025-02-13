#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *array1;

    array1 = (int *)malloc(6 * sizeof(int));

    printf("Enter Array Elements: ");
    for (int i = 0; i < 6; ++i)
    {
        scanf("%d", (array1 + i));
    }

    printf("Array Elements: ");
    for (int i = 0; i < 6; ++i)
    {
        printf("%d ", *(array1 + i));
    }

    array1 = realloc(array1, 7 * sizeof(int));

    array1[6] = 20;

    printf("\nNew Array Elements: ");
    for (int i = 0; i < 7; ++i)
    {
        printf("%d ", *(array1 + i));
    }

    printf("\n");

    return 0;
}