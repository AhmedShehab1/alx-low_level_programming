#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates An Array OF Integers
 * @min: Least Number That The Array Starts With
 * @max: Greatest Number That The Array Ends With
 *
 * If Min > Max -----> array_range Will Return NULL
 * Return: pointer to the newly created array
 * (Newly Allocated Memory) OR NULL If It Fails
*/
int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc((max - min + 1) * sizeof(max));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			while (min <= max)
			{
				ptr[i] = min;
				i++;
				min++;
			}
		}
	}
	return (ptr);
}
