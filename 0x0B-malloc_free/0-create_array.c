#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create Array Of Characters
 * @size: Size Of Array
 * @c: Specific Char To Initialize The Array With.
 * Return: Pointer To The Array OR 0 if Size is Zero.
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{

	}
	else
	{
		ptr[i] = c;
		return (ptr);
	}
	return (NULL);
}
