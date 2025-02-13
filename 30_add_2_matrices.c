#include <stdio.h>

int main()
{

    int m1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int m2[2][3] = {
        {7, 8, 9},
        {10, 11, 12}};

    int sum[2][3];

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {

            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}