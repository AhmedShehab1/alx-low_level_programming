#include "main.h"

/**
 * swap_int - Swaps Value Of Two Integer
 * @a: First Value
 * @b: Second Value
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
