#include <stdio.h>

int main()
{

    FILE *fptr;

    fptr = fopen("23_appending_file.txt", "a");

    fputs("\n\n", fptr);
    fputs("Chicky, Chicky, Chicky,\n", fptr);
    fputs("Clap, Clap, Cha-Cha-Cha.\n", fptr);
    fputs("Chicky, Chicky, Chicky,\n", fptr);
    fputs("Clap, Clap, Cha-Cha-Cha.\n", fptr);

    fclose(fptr);

    return 0;
}