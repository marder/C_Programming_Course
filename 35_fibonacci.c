#include <stdio.h>

int fib(int n)
{

    if (n == 0 || n == 1)
    {
        printf("%d\n", n);
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int result = fib(8);
    printf("%d\n", result);

    return 0;
}