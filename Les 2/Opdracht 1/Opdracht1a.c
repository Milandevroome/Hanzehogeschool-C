#include <stdio.h>
#include "les1a.h"

int main()
{
    int y;
    printf("Maak een keuze 1, 2 en 3!: ");
    scanf("%d", &y);
    if (y < 0)
    {
        return (0);
    }

    if (y == 2)
    {
        eerste();
    }
    printf("Je hebt gekozen voor: %d", y);

    return (0);
}
