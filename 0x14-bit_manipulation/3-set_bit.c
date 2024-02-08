#include "main.h"
/**
 * set_bit - Set Bit Of Corresponding Index
 * @n: Pointer To Number
 * @index: Index To Be Searched For
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	return (Set_Bit(*n, index));
}
