#include <stdio.h>

int main()
{
    int x = 5;

    // y is assigned the current value of x (5), then x is incremented to 6
    int y = x++;

    printf("x = %d, y = %d\n", x, y);

    int a = 10;

    // b is assigned the current value of a (10), then a is decremented to 9
    int b = a--;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}