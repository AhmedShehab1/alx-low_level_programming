#include "main.h"
#define EXTREME -1
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: Number To Be Raised To @y
 * @y: Power No.
 *
 * Return: If y is lower than 0, the function should return -1
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-EXTREME);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x = x * _pow_recursion(x, y - 1);
	}
	return (x);
}
