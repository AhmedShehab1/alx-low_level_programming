#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (; i < (int)sizeof(alphabet) - 1; i++)
	{
		putchar(alphabet[i]);
	}

	/* Print a newline character for better output readability */
	putchar('\n');

	return (0);
}

