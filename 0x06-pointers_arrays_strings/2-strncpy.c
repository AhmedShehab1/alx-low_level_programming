#include "main.h"
#include <string.h>
/**
 * _strncpy - Copies A Given String
 * @dest: String 1
 * @src: String 2
 * @n: Max No. Of Copied Bytes
 *
 * Return: Copied String
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	
	while ((*src > 0) && (n > 0))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
		i++;
	}
	*dest = '\0';
	dest -= i;
	return (dest);
}
