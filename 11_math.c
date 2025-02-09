#include <stdio.h>
#include <math.h>

int main()
{

    int num = 81;
    int num2 = 27;

    int base = 2;
    int power = 3;

    // Find the square root
    double root = sqrt(num);
    double root2 = cbrt(num2);
    int result = pow(base, power);

    printf("Square root of %d is %.2lf\n", num, root);
    printf("Cube root of %d is %.2lf\n", num2, root2);
    printf("2^3=%d\n", result);

    return 0;
}