#include <stdio.h>

int find_power(int base, int power)
{

    if (power == 0)
    {
        return 1;
    }

    return find_power(base, power - 1) * base;
}

int main()
{

    int base, power;
    scanf("%d %d", &base, &power);

    int result = find_power(base, power);
    printf("%d\n", result);

    return 0;
}