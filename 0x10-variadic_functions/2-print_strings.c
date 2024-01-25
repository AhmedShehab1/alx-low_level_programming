#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints Strings
 * @separator: String To Be Printed Between Strings
 * @n: Number Of Passed Arguments
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr, ptr_cpy;
	unsigned int counter = 0;

	va_start(ptr, n);
	for (; counter < n; counter++)
	{
		va_copy(ptr_cpy, ptr);
		if (va_arg(ptr, char *) == 0)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(ptr_cpy, char *));
		}
		if ((separator == (void *)0) || (counter == n - 1))
		{
			continue;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
