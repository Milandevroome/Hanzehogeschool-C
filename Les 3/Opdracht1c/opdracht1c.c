#include <stdio.h>

int main()
{
    int number;
    struct algemeen
    {
        char naam[20];
        int leeftijd;
        struct opleiding
        {
            char naam[50];
            int instroomjaar;
        } opleiding;
    };

    struct algemeen lijst[2];

    for (number = 0; number < 2; number++)
    {
        printf("Voer een naam in: ");
        scanf("%s", lijst[number].naam);

        printf("Voer een leeftijd in: ");
        scanf("%d", &lijst[number].leeftijd);

        printf("Naam van je opleiding: ");
        scanf("%s", lijst[number].opleiding.naam);

        printf("Je instroomjaar: ");
        scanf("%d", &lijst[number].opleiding.instroomjaar);

        printf("\n");
    }

    for (number = 0; number < 2; number++)
    {
        printf("%s\n%d\n%s\n%d\n\n", lijst[number].naam, lijst[number].leeftijd, lijst[number].opleiding.naam, lijst[number].opleiding.instroomjaar);
    }

    return 0;
}