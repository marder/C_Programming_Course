#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Enter the number of men: ");
    scanf("%d", &n);

    int *ages;

    ages = (int *)malloc(n * sizeof(int));

    if (ages == NULL)
    {
        printf("ERROR: Memory not allocated!");
        return 0;
    }

    printf("Enter ages: ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ages + i);
    }

    printf("Ages of the men are:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("-> %d\n", *(ages + i));
    }

    printf("\n");
    free(ages);

    return 0;
}