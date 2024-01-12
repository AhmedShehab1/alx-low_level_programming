#include <stdio.h>
#include <stdlib.h>
#define __UNUSED_PARAM(param) (void)(param)
/**
 * main - Multiply Two Numbers
 * @argc: Number Of Command Line Arguments
 * @argv: Array Of Char Pointers To Command Line Arguments
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	__UNUSED_PARAM(argc);
	if ((argv[1] == 0))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
