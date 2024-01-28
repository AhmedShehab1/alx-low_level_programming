#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Prints Anything
 * @format: list of types of arguments passed to the function
*/
void print_all(const char *format, ...)
{
	va_list ptr;
	char *String;
	int Counter = 0, flag = 0;
	while (format[Counter] != 0)
	{
		Counter++;
	}
	va_start(ptr, format);
	while (*format != '\0')
	{
		switch (*format)
		{
			case 'c':
			printf("%c", va_arg(ptr, int));
			break;
			case 'i':
			printf("%d", va_arg(ptr, int));
			break;
			case 'f':
			printf("%f", va_arg(ptr, double));
			break;
			case 's':
			String = va_arg(ptr, char *);
			String == ((void *)0)? printf("(nil)"):printf("%s", String);
			break;
			default:
			flag++;
			format++;
			continue;
			break;
		}
		if (flag != Counter - 1)
		{
			printf(", ");
		}
		format++;
		flag++;
	}
	printf("\n");
	va_end(ptr);
}
