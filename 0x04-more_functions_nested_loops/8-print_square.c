#include "main.h"

/**
 *print_square: prints Squares 
 *@size: Size Of Square
 * 
*/
void print_square(int size)
{
int Length = size;

while(Length--)
{
for (int i = 0; i < size; i++)
{
_putchar(35);
}
_putchar('\n');
}
if(size <= 0)
{
_putchar('\n');
}
}
