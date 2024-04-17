#include "hash_tables.h"
/**
 * hash_djb2 -  hash function implementing the djb2 algorithm.
 * @str: key To Be Mapped To a Hash Value
 *
 *  Return: Hash Value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while (c = *str++)
	{
		/**
		 * Left Shifting Is Equivalent To Multiplying
		 * The Number By 2 Raised To The power Of The Shift Amount
		 *
		 * i.e --> hash << 5  = hash * 2^5
		 */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
