#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 *  in an array using linear search
 * @array: pointer to first element of the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index in array where value was found. Otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	}
	return (-1);
}
