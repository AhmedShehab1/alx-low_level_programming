#include "main.h"

/**
 * puts2 - Prints Every Other Characters Of A String
 * @str: Passed String
*/
void puts2(char *str)
{
	int i = 0;

	while (*str > 0)
	{
		if ((i % 2) == 0)
		{
			_putchar(*str);
		}
		i++;
		str++;
	}
}
