#include <stdio.h>

#define PI 3.14159
#define circleArea(r) (PI * r * r)

int main()
{

    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double area = circleArea(radius);
    printf("Area: %.2lf\n", area);

    return 0;
}