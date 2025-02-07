#include <stdio.h>

int main()
{

    double total = 0;
    double num;

    while (1)
    {

        printf("Wprowadź liczbę: ");
        scanf(" %lf", &num);

        if (num == 0)
        {
            break;
        }

        total = total + num;
    }

    printf("Result: %.3lf\n", total);

    return 0;
}