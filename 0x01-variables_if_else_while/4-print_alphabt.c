#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alphabet[] = "abcdfghijklmnoprstuvwxyz";
    int i = 0;

    /* Print lowercase alphabet */
    for (; i < (int)sizeof(alphabet) - 1; i++)
    {
        putchar(alphabet[i]);
    }

    putchar('\n');

    return (0);
}
