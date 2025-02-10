#include <stdio.h>

double *divideNumbers(double *n1, double *n2, double *result)
{
    *result = *n1 / *n2;
    return result;
}

int main()
{
    double number1;
    double number2;
    printf("Podaj liczby:");
    scanf("%lf %lf", &number1, &number2);

    double result;

    divideNumbers(&number1, &number2, &result);

    printf("%.2lf / %.2lf = %.2lf\n",number1, number2, result);

    return 0;
}