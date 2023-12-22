#include "main.h"

/**
 *more_numbers_: prints Numerical Values in order (0-14)
 * 
 * 
*/
void more_numbers_(void)
{
int i = 48, j, flag = 0;

for ( ; i <= 49 ; i++)
{
flag++;
for (j = 48; j <= 57; j++)
{
if (i == 49)
{
_putchar(i);
}
_putchar(j);
if ((i == 49) && (flag == 2) && (j == 52))
{
break;
}
}
}
_putchar('\n');
}
/**
 *more_numbers: prints Numerical Values in order (0-14)(x10)
 * 
 * 
*/
void more_numbers(void)
{
char i = 0;

for ( ; i < 10 ; i++)
{
more_numbers_();    
}
}