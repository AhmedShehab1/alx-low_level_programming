#include "main.h"
#define NOT_PRIME 0
#define PRIME     1
/**
 * is_prime_number - Check A Given Number Is Prime Or Not
 * @n: Number To Be Examined
 *
 * Return:returns 1 if the input integer 
 * is a prime number, otherwise return 0. 
*/
int is_prime_number(int n)
{
	int Number = 1;

	if ( Number < n)
	{
		Number++;
		Number = is_prime_number(n);
		if ((n % Number) == 0)
		{
			return (NOT_PRIME);
		}
		else
		{
			return (PRIME);
 		}
	}
}
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}