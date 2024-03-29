#include "main.h"

/**
 * _puts - Prints Passed String To Stdout
 * @str: String To Be Printed
*/
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
