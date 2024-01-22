#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: No. Elements For Allocated  Array
 * @size: Size In Bytes Of Each Element
 *
 * Return: Pointer To Allocated Memory
 * (Newly Allocated Memory) OR NULL If It Fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i = 0;
	char *ptr;


	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * nmemb);
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (; i < (nmemb * size); i++)
		{
			ptr[i] = 0;
		}
	}
	return ((void *)ptr);
}






