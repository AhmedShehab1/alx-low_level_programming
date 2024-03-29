#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name.
 * @name: Name To Be Printed
 * @f: Function Pointer That Points To A
 * Function That Takes A String To Print
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		exit(98);
	}
	f(name);
}
