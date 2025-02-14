#include <stdio.h>

int calculate_sum(int n)
{

    if (n == 1)
    {
        return 1;
    }

    printf("n = %d\n", n);
    return n + calculate_sum(n - 1);
}

int main()
{

    int result = calculate_sum(3);
    printf("%d\n", result);

    return 0;
}