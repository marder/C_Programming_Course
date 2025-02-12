#include <stdio.h>

struct Man
{
    char name[50];
    int age;
};

// function definition
void display(struct Man m1)
{
    printf("Name: %s\n", m1.name);
    printf("Age: %d\n", m1.age);
}

int main()
{

    // create and initialize struct variable
    struct Man man1 = {.name = "Bob", .age = 35};

    // function call
    display(man1);

    return 0;
}