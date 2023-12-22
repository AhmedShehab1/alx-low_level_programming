#include "main.h"

/**
 *print_most_numbers- prints Numerical Values in order except 4 & 2
 *
 *
*/
void print_most_numbers(void)
{
int i = 48;

for ( ; i <= 57 ; i++)
{
if ((i == 50) || (i == 52))
{
continue;
}
_putchar(i);
}
_putchar('\n');
}
