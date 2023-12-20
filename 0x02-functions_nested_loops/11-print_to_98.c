#include "main.h"

/**
 * print_to_98 - Prints All Natural Numbers From n to 98
 * @n: Number To Count From To 98
 *
*/

void print_to_98(int n)
{
int i, Division;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i >= 100)
{
Division = i / 10;

while (Division >= 10)
{
Division /= 10;
}
_putchar('0' + (Division));
_putchar('0' + ((i / 10) % 10));
_putchar('0' + (i % 10));
_putchar(',');
_putchar(' ');
continue;
}
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
if (i == 98)
{
continue;
}
_putchar(',');
_putchar(' ');
}
}
else if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i >= 10)
{
_putchar('0' + (i / 10 ));
_putchar('0' + (i % 10));
}
else if ((i >= 0) && (i <= 9))
{
_putchar('0' + i);
}
if (i < 0)
{
if (i <= -100)
{
Division = (i * -1) / 10;
while (Division >= 10)
{
Division /= 10;
}
_putchar(45);
_putchar('0' + Division);
_putchar('0' + (((i * -1) / 10) % 10));
_putchar('0' + ((i * -1) % 10));
_putchar(',');
_putchar(' ');
continue;
}
if (i <= -10)
{
_putchar(45);
_putchar('0' + (( i * -1) / 10 ));
_putchar('0' + (( i * -1) % 10 ));
}
else
{
_putchar(45);
_putchar('0' + (i * -1));
}
}
if (i == 98)
{
continue;
}
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
_putchar('\n');
}
