#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: String
 *
 * Return: Size Of String
*/
int _strlen_recursion(char *s)
{
	int Size_Of_String = 0;

	if (*s >  0)
	{
		Size_Of_String++;
		Size_Of_String += _strlen_recursion(++s);
	}
	return (Size_Of_String);
}
