#include "main.h"
#define ERROR -1
/**
 * factorial - Calculate The Factorial Of A Given Number
 * @n: Number To Be Examined
 *
 * Return:If n is lower than 0, the function
 * should return -1 to indicate an error
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (ERROR);
	}
	n = n * factorial(n - 1);
	return (n);

}
