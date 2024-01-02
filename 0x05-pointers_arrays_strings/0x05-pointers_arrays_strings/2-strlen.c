#include "main.h"

/**
 * _strlen - Calculates Size Of Given String
 * @s: String To Be Counted
 * Return: String Size
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s > 0)
	{
		*s++;
		i++;
	}
	return (i);
}
