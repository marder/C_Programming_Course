#include <stdio.h>

int main()
{

    int age;
    float bon;
    double sal;
    char alph;

    // return the size in bytes
    printf("The size of an int is %d bytes\n", sizeof(age));
    printf("The size of a float is %d bytes\n", sizeof(bon));
    printf("The size of a double is %d bytes\n", sizeof(sal));
    printf("The size of a char is %d byte\n", sizeof(alph));

    return 0;
}