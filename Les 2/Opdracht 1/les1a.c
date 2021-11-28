#include <stdio.h>
void print_function(char letter);
int ctr;
int water;
int eerste(void)
{
    char star = '*';
    char dash = '-';
    for (water = 0; water < 10; water++)
    {
        print_function(star);
        print_function(dash);
        printf("\n");
    }
    return 0;
}
void print_function(char letter)
{
    for (ctr = 0; ctr < 9; ctr++)
    {
        printf("%c", letter);
    }
}