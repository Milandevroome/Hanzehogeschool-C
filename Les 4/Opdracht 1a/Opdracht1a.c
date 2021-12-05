#include <stdio.h>
char tekst(FILE *bestand);

int main()
{
    FILE *bestand;
    bestand = fopen("text.txt", "r");
    if (bestand == NULL)
    {
        printf("Bestand is niet aanwezig.");
        return 0;
    }
    tekst(bestand);

    fclose(bestand);
    return 0;
}

char tekst(FILE *bestand)
{
    char checker;
    int charteller = 0;
    FILE *nieuwbestand;
    nieuwbestand = fopen("nieuw.txt", "w");

    while ((checker = fgetc(bestand)) != EOF)
    {
        charteller++;

        checker = checker + 1;
        fputc(checker, nieuwbestand);
    }
    fclose(nieuwbestand);
    printf("Het bestand bevat %d karakters", charteller);
}