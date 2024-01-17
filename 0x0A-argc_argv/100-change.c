#include <stdio.h>
#include <stdlib.h>
#define UNUSED_PARAM(param) (void)(param)
/**
 * main - Prints The Minimum Number Of coins
 * To Make Change For An Amount Of Money
 * @argc:Number of Command_Line Argument Passed
 * @argv:Pointer To Passed Arguments
 *
 * Return: Always 0
*/
int main(int  argc, char *argv[])
{
	int Min_Number_Of_Coins = 0, index = 0, Value;
	int Values_Allowed[5] = {25, 10, 5, 2, 1};

	UNUSED_PARAM(argc);
	if (argv[2] != 0)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		Value = atoi(argv[1]);
		for (; index < 5; index++)
		{
			while ((Value - Values_Allowed[index]) >= 0)
			{
				Value -= Values_Allowed[index];
				Min_Number_Of_Coins++;
			}
		}
		printf("%d\n", Min_Number_Of_Coins);
	}
	return (0);
}
