#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates Two Strings
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer To The New String OR 0 if Str = NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 1;
	char *ptr;

	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	ptr = (char *)malloc(i + j + 1);
	j += i;
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; k < 3; k++)
		{
			if (k == 1)
			{
				for (--k; k <= i; k++)
				{
					ptr[k] = s1[k];
				}
				k = 1;
			}
			if (k == 2)
			{
				k = 0;
				for (i += 1; i < j; i++)
				{
					ptr[i] = s2[k];
					k++;
				}
				break;
			}
		}
		ptr[j] = 0;
	}
	return (ptr);
}
