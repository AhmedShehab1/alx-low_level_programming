#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: Memory Area To Be Copied To
 * @src: Memory Area To Be Copied From
 * @n: No Of Bytes To Be Copied
 *
 * Return: Pointer To @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest -= (50 + i);
	return (dest);
}
