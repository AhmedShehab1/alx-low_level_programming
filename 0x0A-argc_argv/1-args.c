#include <stdio.h>
#define __UNUSED_PARAM(param) (void)(param)
/**
 * main - Prints The number of arguments passed to it
 * @argc: Number Of Command Line Arguments
 * @argv: Array Of Char Pointers To Command Line Arguments
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	__UNUSED_PARAM(argv);
	printf("%d\n", argc - 1);
	return (0);
}
