#include <stdio.h>
#include <string.h>

int main()
{

    char string1[] = "Hello, World!";
    printf("%zu\n", strlen(string1));

    char copied_string[strlen(string1)];
    strcpy(copied_string, string1);  
    printf("%s\n", copied_string);

    char text1[19] = "Hello, ";
    char text2[] = "World!";
    strcat(text1, text2);
    printf("%s\n", text1);

    return 0;
}