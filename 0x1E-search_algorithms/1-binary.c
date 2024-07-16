#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to first element of the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index in array where value was found. Otherwise -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, high;

	if (array != NULL)
	{
		low = 0;
		high = size - 1;

		while (low <= high)
		{
			print_current_array(array, high, low);

			mid = (high + low) / 2;

			if (array[mid] < value)
			low = mid + 1;
			else if (array[mid] > value)
			high = mid - 1;
			else
			return (mid);
		}
	}
	return (-1);
	}

/**
 * print_current_array - function to print a sub-array in @array
 * based on low & high values
 * @array: pointer to first element of the array
 * @high: the last index to print in the array
 * @low: start index of printing
*/
void print_current_array(int *array, size_t high, size_t low)
{
	size_t i = low;

	printf("Searching in array: ");
	for (; i <= high; i++)
	{
	printf("%d", array[i]);
	if (i == high)
		continue;
	printf(", ");
	}
	printf("\n");
}
