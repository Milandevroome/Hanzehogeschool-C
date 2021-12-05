#include <stdio.h>

int maxArrays(float *xpointer, float *ypointer, float *zpointer);

int number;
int pnt;

int main()
{
    float x[4];
    float y[4];
    float z[4];
    float *xptr;
    float *yptr;
    float *zptr;

    xptr = &x[0];
    yptr = &y[0];
    zptr = &z[0];

    x[0] = 0.7;
    x[1] = 3.3;
    x[2] = 0.5;
    x[3] = 10.3;
    y[0] = 4.1;
    y[1] = 1.5;
    y[2] = 0.5;
    y[3] = 2.3;
    z[0] = 4.1;
    z[1] = 3.3;
    z[2] = 0.5;
    z[3] = 10.3;

    printf("x Array en y Array:\n");
    for (number = 0; number < 4;)
    {
        printf("%g %g\n", x[number], y[number]);
        number++;
    }
    printf("\nArray 3:\n");
    maxArrays(xptr, yptr, zptr);
    for (number = 0; number < 4;)
    {
        printf("%g\n", z[number]);
        number++;
    }
    return 0;
}

int maxArrays(float *xpointer, float *ypointer, float *zpointer)
{
    for (pnt = 0; pnt < 4;)
    {
        if (xpointer[pnt]> ypointer[pnt])
        {
            zpointer[pnt] = xpointer[pnt];
        }
        else
        {
            zpointer[pnt] = ypointer[pnt];
        }
        pnt++;
    }
}