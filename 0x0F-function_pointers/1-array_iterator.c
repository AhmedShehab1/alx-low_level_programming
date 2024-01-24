#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array.
 * @array: Array To Be Considered
 * @size: Size Of The Array
 * @action: Function Pointer That Perform A Specific
 * Task For Each Array Element
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t Counter = 0;

	for (; Counter < size; Counter++)
	{
		(*action)(array[Counter]);
	}
}
