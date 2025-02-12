#include <stdio.h>

typedef struct Person
{
    int age;
    double number;
} person;

int main()
{

    person person1 = {.age = 56, .number = 1458.09};

    person *pt;

    pt = &person1;

    printf("Age: %d\n", pt->age);
    printf("Salary: %.2lf\n", pt->number);

    return 0;
}