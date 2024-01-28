#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - Selects Correct Function To Be Performed
 * @s: Operator
 *
 * Return: Pointer To Function Corresponding To Passed Operator
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while ((i < 5) && (*s != *ops[i].op))
	{
		i++;
	}
	return (ops[i].f);
}
