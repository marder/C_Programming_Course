#include <stdio.h>

int find_length(char *text, int index)
{

    if (text[index] == '\0')
    {
        return 0;
    }

    return find_length(text, index + 1) + 1;
}

int main()
{

    char text[100];
    scanf("%[^\n]s", text);

    int result = find_length(text, 0);
    printf("%d\n", result);

    return 0;
}