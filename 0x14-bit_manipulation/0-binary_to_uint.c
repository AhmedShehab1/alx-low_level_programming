#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * --> there is one or more chars in the string b that is not 0 or 1
 * --> b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int Counter = 0, Index = 0, ConvertedIntNumber = 0;
	int temp;

	if (b == NULL)
	{
		return (0);
	}
	while (b[Counter] > 0)
	{
		if (b[Counter] != '1' && b[Counter] != '0')
		{
			return (0);
		}
		Counter++;
	}
	temp = Counter - 1;
	for (; Index < Counter; Index++)
	{
		if (b[temp] == '0')
		{
			temp--;
			continue;
		}
		ConvertedIntNumber += Get_Power(Index);
		temp--;
	}
	return (ConvertedIntNumber);
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
