#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 48, j = 49;

    short int y = 9;
    
    for ( ; i <= 56 ; i++)
    {
       
        for ( ; j <= 57 ; j++)
        {
            putchar(i);
            putchar(j);
            if ((i == 56) && (j == 57))
            {
                continue;
            }
            putchar(',');
            putchar(' ');

        }
        y--;
        j -= y;
        
    }
    putchar('\n');
    return (0);
}
