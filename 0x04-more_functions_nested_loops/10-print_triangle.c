#include "main.h"
/**
 *print_triangle- prints Triangles
 *@size: Size Of Triangle
 *
*/
void print_triangle(int size)
{
int A_intNoOfSpaces = size - 1, No_Of_Stars, i = 1;

for (; i <= size; i++)
{
if (size > 0)
{
print_spaceofTriangle(A_intNoOfSpaces--);
for (No_Of_Stars = 0; No_Of_Stars < i; No_Of_Stars++)
{
_putchar(35);
}
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
/**
 *print_spaceofTriangle- prints Spaces w.r.t Diagonals
 *@A_intNoOfSpaces: Spaces To Be Printed
 *
*/
void print_spaceofTriangle(int A_intNoOfSpaces)
{
int i;

for (i = 0; i < A_intNoOfSpaces; i++)
{
_putchar(' ');
}
}
