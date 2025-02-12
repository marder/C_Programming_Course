#include <stdio.h>

int main()
{

    FILE *fpt;
    fpt = fopen("22_file.txt", "r");
    char fileContent[1000];

    if (fpt != NULL)
    {
        while (fgets(fileContent, 1000, fpt))
        {
            printf("%s", fileContent);
        }
        printf("\n");
    }
    else
    {
        printf("Unable to open the file\n");
    }

    return 0;
}