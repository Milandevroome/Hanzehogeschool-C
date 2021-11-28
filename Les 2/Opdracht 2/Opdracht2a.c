#include <stdio.h>
#include <math.h>
#define PI 3.142857

void berekenomtrek(float *inputdia);

int main()
{
    float diameter;
    float *dia;
    printf("Geef hier de diameter van de cirkel: ");
    scanf("%f", &diameter);
    dia = &diameter;
    berekenomtrek(dia);
    printf("%f\n", diameter);
    return 0;
}

void berekenomtrek(float *inputdia)
{
    *inputdia = *inputdia * PI;
}