#include "main.h"
/**
 * reverse_array - Reverse Given Array of int
 * @a: Array To Be Reversed
 * @n: number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int i = 0, Copied_Array[50];

	for (; i < n ; i++)
	{
		Copied_Array[i] = *a;
		if (i == n - 1)
		{
			continue;
		}
		a++;
	}
	for (i = 0; i < n; i++)
	{
		*a = Copied_Array[i];
		if (i == n - 1)
		{
			continue;
		}
		a--;
	}
}
