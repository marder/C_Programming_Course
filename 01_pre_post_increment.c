#include <stdio.h>

int main()
{
    int x = 5;

    // Pre-increment: x is incremented to 6, then assigned to y
    int y = ++x;

    printf("x = %d, y = %d\n", x, y);

    int a = 10;
    // Pre-decrement: a is decremented to 9, then assigned to b
    int b = --a;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}