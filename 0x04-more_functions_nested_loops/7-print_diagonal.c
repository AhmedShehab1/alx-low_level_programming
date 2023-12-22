#include "main.h"

/**
 *print_diagonal: prints Diagonal line with a length provided by user
 *@n: Length Of Line
 * 
*/
void print_diagonal(int n)
{
for (int i = 0; i < n; i++)
{
if( n > 0)
{
print_spaces(i);
_putchar(92);
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
/**
 *print_spaces: prints Spaces w.r.t Diagonals
 *@A_intNoOfSpaces: Spaces To Be Printed
 * 
*/
void print_spaces(int A_intNoOfSpaces)
{
for(int i = 0; i < A_intNoOfSpaces; i++)
{
_putchar(' ');
}
}