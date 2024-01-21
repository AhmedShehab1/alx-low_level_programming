#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiplies two positive numbers.
 * @argc: Number Of Command-Line Arguments
 * @argv: Pointer To Command-Line Arguments
 *
 * Return: Always 0
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	if ((argv[2] == 0) || (argv[1] == 0))
	{
		Print_Error();
		exit(98);
	}
	if ((atoi(argv[1]) || atoi(argv[2])) == 0)
	{
		Print_Error();
		exit(98);
	}
	Print_Number(atoi(argv[1]) * atoi(argv[2]));
	_putchar('\n');
	return (0);
}
/**
 * Print_Error - Prints "Error" To Stdout
*/
void Print_Error(void)
{
	char Arr_Error[] = "Error";
	size_t i = 0;

	for (; i < sizeof(Arr_Error); i++)
	{
		_putchar(Arr_Error[i]);
	}
	_putchar('\n');
}
/**
 * Print_Number - Prints Multiplication Result To Stdout
 * @Result: Multiplication Result
*/
void Print_Number(int Result)
{
	int Copy_Of_Result = 1;

	do {
		Copy_Of_Result = (Copy_Of_Result * 10) + (Result % 10);
	} while ((Result /= 10) != 0);
	do {
		_putchar(48 + (Copy_Of_Result % 10));
	} while ((Copy_Of_Result /= 10) != 1);
}
