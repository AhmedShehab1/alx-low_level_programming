#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#define a argv[2]
/**
 * main - program that performs simple operations.
 * @argc: Number Of  Passed Command Line Arguments
 * @argv: Pointer To Command Line Arguments
 *
 * Return: Always 0
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	op_t Ptr_To_Func;
	int Result;

	if (argv[1] == ((void *)0))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (*a != '+' && *a != '-' && *a != '*' && *a != '/' && *a != '%')
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(99);
	}
	if (((*a == 37) || (*a == 47)) && (*argv[3] == 0))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(100);
	}
	Ptr_To_Func.f = get_op_func(argv[2]);
	Result = Ptr_To_Func.f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", Result);
	return (0);
}
