#include "main.h"

/**
 * puts_half - Prints Second Half Of The String
 * @str: String Passed
*/
void puts_half(char *str)
{
	int i = 0, j = 0, n;

	while (*str++ > 0)
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		for (; j < (i/2) ; j++)
		{
			str++;
		}
		while (*str > 0)
		{
			_putchar(*str++);
		}
	}
	else
	{
		n = (i - 1) / 2;
		for (; j < n ; j++)
		{
			str++;
		}
		while (*str > 0)
		{
			_putchar(*str++);
		}
	}
}