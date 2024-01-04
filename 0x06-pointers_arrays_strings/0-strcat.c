#include "main.h"

/**
 * _strcat - Concatenate Two Strings
 * @dest: String 1
 * @src: String 2
 *
 * Return: Pointer To Concatenated String
*/
char *_strcat(char *dest, char *src)
{
	while (*dest > 0)
	{
		dest++;
	}
	while (*src > 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (&dest[0]);
}
