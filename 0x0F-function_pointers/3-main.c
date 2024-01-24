#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - 
 * 
 * 
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	op_t Ptr_To_Func;
	int Result;

	if (argv[1] == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (argv[2] != 43 && argv[2] != 45 && argv[2] != 47 && argv[2] != 37 && argv[2] != 42)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(99);
	}
	if (((argv[2] == 37) || (argv[2] == 47)) && (argv[3] == 0))
	{
		printf("H");
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
	printf("%d: ",Result);
	return (0);
}