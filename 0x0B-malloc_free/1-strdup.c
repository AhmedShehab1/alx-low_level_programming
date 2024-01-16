#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Allocates The Space Needed For @str
 * And Copiea It To This Location
 * @str: String To Be Copied
 *
 * Return: Pointer To The New String OR 0 if Str = NULL.
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ptr;

	if (*str == 0)
	{
		return (NULL);
	}
	while (str[i] != 0)
	{
		i++;
	}
	ptr = (char *)malloc(i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; j < i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = 0;
	return (ptr);
}
