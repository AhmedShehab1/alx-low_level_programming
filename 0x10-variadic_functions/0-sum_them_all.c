#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - Sum All Parameters Passed
 * @n: No. Of Arguments
 *
 * Return: Sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int Sum = 0;
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);
	for (; i < n; i++)
	{
		Sum += va_arg(ptr, int);
	}
	return (Sum);
	va_end(ptr);
}
