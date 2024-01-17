#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 *  pointed to by s with the constant byte b
 * @s: Memory Area
 * @b: Byte To Fill @s
 * @n: No. OF Bytes To Be Filled
 *
 * Return: Pointer To Memory Area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*s = b;
		s++;
	}
	s -= --i;
	return (s);
}
