#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * 
 * 
*/
void jack_bauer(void)
{
char M2, M1, S2, S1, flag = 0;

for ( M2 = 48; M2 <= 50; M2++)
{
for ( M1 = 48; M1 <= 57; M1++)
{
if (M2 == 50)
{
flag++;
}
for ( S2 = 48; S2 <= 53; S2++)
{
for ( S1 = 48; S1 <= 57; S1++)
{
_putchar(M2);
_putchar(M1);
_putchar(':');
_putchar(S2);
_putchar(S1);
_putchar('\n');
}
}
if (flag == 4)
{
break;    
}
}
}
}
