#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints Numbers
 * @separator: String To Be Printed Between Numbers
 * @n: Number Of Passed Arguments
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int counter = 0;

	va_start(ptr, n);
	for (; counter < n; counter++)
	{
		printf("%d", va_arg(ptr, int));
		if ((separator == (void *)0) || (counter == n - 1))
		{
			continue;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
