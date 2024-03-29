#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Pointer To The Number
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	else
		Clr_Bit(*n, index);
	return (1);
}
