#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 48, j = 49, k = 50;

    short int y = 9;
    short int w = 8;
    for ( ; i <= 55 ; i++)
    {
       
        for ( ; j <= 56 ; j++)
        {
            
            for ( ; k <= 57 ; k++ )
            {
                putchar(i);
                putchar(j);
                putchar(k);
                if ((i == 55) && (j == 56) && (k == 57))
                {
                    continue;
                }
                putchar(',');
                putchar(' ');
            }
            w--;
            k -= w; 
            if (w == 0)
            {
                w = 8;
            }

        }
        y--;
        j -= y;
        if (y == 0)
         {
            y = 8;
         }
    }
    putchar('\n');
    return (0);
}
