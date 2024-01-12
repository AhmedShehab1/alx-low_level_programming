#include <stdio.h>
#define __UNUSED_PARAM(param) (void)(param)
/**
 * main - Prints All Arguments It Receives
 * @argc: Number Of Command Line Arguments
 * @argv: Array Of Char Pointers To Command Line Arguments
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
