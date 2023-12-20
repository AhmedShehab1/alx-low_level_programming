#include "main.h"

/**
 * 
 * 
 * times_table - Prints The 9 Time Tables Starting With 0.
 * 
 * 
 * 
*/
void times_table(void)
{
short int i, j, n,c = 4;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if ( (i * j) >= 10)
{
 n = i * j;
_putchar('0' + (n / 10) );
_putchar('0' + (n % 10) );
}
else
{
_putchar('0' + i * j);
}
if ( j == 9 )
{
continue;
}
_putchar(',');
_putchar(' ');
if ( ( (i * j) >= 10) || ( (i * (j + 1)) >= 10 ) )
{
continue;
c--;
}
_putchar(' ');
}
if ( j == 10)
{
_putchar('\n');
}
}
}