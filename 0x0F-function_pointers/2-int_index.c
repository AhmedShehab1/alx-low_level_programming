/**
 * int_index - Searches for an integer.
 * @array: Pointer To Array That Is Being Examined
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: Index Of First Element
 * -1 (If No Elements Matches Or If Size <= Zero )
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int Counter = 0;

	for (; Counter < size; Counter++)
	{
		if ((*cmp)(array[Counter]) != 0)
		{
			return (Counter);
		}
	}
	return (-1);
}
