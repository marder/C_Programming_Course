#include <stdio.h>

enum Size
{
    Small = 3,
    Medium = 14,
    Large = 190
};

int main()
{

    enum Size size1 = Small;
    enum Size size2 = Medium;
    enum Size size3 = Large;

    printf("%d\n", size1);
    printf("%d\n", size2);
    printf("%d\n", size3);

    return 0;
}