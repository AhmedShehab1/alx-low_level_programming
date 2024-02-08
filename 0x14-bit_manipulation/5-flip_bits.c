#include "main.h"
/**
 * flip_bits - Derives the number of bits you would need to
 *  flip to get from one number to another.
 * @n: Number To Be Examined
 * @m: Number We Need To Reach 
 *
 * Return: Number Of bits Required 
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int Index = 0, NumberOfBitsNeeded = 0;
	while (n != m)
	{
		if (Get_Bit(n, Index) != Get_Bit(m, Index))
		{
			Toggle_Bit(n, Index);
			NumberOfBitsNeeded++;
		}
		Index++;
	}
	return (NumberOfBitsNeeded);
}