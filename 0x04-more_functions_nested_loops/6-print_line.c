#include "main.h"

/**
 *print_line- prints line with a length provided by user
 *@n: Length OF Line
 *
*/
void print_line(int n)
{
if (n > 0)
{
int i;

for (i = 0; i < n; i++)
{
_putchar(95);
}
}
_putchar('\n');
}
