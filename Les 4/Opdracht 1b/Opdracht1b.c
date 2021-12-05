#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct algemeen
    {
        char naam[20];
        int leeftijd;
    };

    struct algemeen *pointer = (struct algemeen *)malloc(sizeof(struct algemeen));
    int checker = 1;
    int teller = 1;
    struct algemeen *ptr;

    while (1)
    {
        ptr = pointer;
        ptr += (teller - 1);

        printf("Voer een naam in: ");
        scanf("%s", ptr->naam);

        printf("Voer een leeftijd in: ");
        scanf("%d", &ptr->leeftijd);

        printf("Voer 1 in als je nog een nieuw element wilt toevoegen: ");
        scanf("%d", &checker);
        if (checker != 1)
        {
            break;
        }
        printf("\n");

        struct algemeen *pp = pointer;
        for (int i = 0; i < teller; i++)
        {
            printf("%s\n", pp->naam);
            printf("%d\n", pp->leeftijd);
            pp++;
        }

        teller++;

        pointer = (struct algemeen *)realloc(pointer, teller * sizeof(struct algemeen));
        if (pointer == NULL)
        {
            perror("Fout op getreden");
            exit(-1);
        }
    }

    free(pointer);
    return 0;
}