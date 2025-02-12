#include <stdio.h>

typedef struct Rectangle
{
    int length;
    int breadth;
    int area;
} rectangle;

rectangle findArea(rectangle rect1)
{
    rect1.area = rect1.length * rect1.breadth;
    return rect1;
}

int main()
{
    rectangle rect = {.length = 14, .breadth = 18};
    rect = findArea(rect);
    printf("The area of the rectangle: %d\n", rect.area);
    return 0;
}