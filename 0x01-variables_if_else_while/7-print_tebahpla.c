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
    int i = 0;
    char Array[] = {"zyxwvutsrqponmlkjihgfedcba"};
    for ( ; i < (int)sizeof(Array) - 1 ; i++)
    {
        putchar(Array[i]);
    }

    putchar('\n');

    return (0);
}
