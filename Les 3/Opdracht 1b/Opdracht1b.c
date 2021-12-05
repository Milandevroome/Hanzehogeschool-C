#include <stdio.h>
#include <string.h>

int main()
{
    char maxzinlength[50];
    printf("Voer een zin in met max 50 karakters: ");
    gets(maxzinlength);
    printf("%s\n", maxzinlength);
    printf("Je hebt %d karakter gebruikt.", strlen(maxzinlength));
    return 0;
}