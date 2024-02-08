#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: The Number
 *
*/
void print_binary(unsigned long int n)
{
	unsigned int Index = 0, Total = 0, Flag = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (Get_Power(Index) < n)
	{
		Index++;
	}
	while (Index + 1)
	{
		if (Total + Get_Power(Index) <= n)
		{
			Total += Get_Power(Index);
			_putchar('1');
			Flag = 1;
			Index--;
			continue;
		}
		if (Flag == 1)
		{
			_putchar('0');
		}
		Index--;
	}
}
/**
 * Get_Power - Returns ((2)) Power The Given Index
 * @Index: Index
 *
 * Return: The Result
*/
unsigned int Get_Power(unsigned int Index)
{
	unsigned int Result = 1;

	while (Index)
	{
		Result *= 2;
		Index--;
	}
	return (Result);
}
