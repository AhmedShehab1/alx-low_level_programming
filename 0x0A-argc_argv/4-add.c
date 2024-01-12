#include <stdio.h>
#include <stdlib.h>
#define __UNUSED_PARAM(param) (void)(param)
/**
 * main - Add Positive Numbers
 * @argc: Number Of Command Line Arguments
 * @argv: Array Of Char Pointers To Command Line Arguments
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argv[1] == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; ++i)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
