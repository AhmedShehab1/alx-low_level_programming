#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;

    /* Print lowercase alphabet */
    for (; i < (int)sizeof(alphabet) - 1; i++)
    {
        putchar(alphabet[i]);
    }

    /* Print uppercase alphabet */
    for (i = 0; i < (int)sizeof(alphabet) - 1; i++)
    {
        putchar(toupper(alphabet[i]));
    }

    putchar('\n');

    return (0);
}
