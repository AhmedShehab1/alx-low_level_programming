#include "main.h"
/**
 * _strspn -  Gets the length of a prefix substring.
 * @s: String To Be Examined
 * @accept: Bytes To Be Searched For All Over The String
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	short int i = 0, n = 0;

	while (*accept > 0)
	{
		while (*s != ' ')
		{
			if (*s == *accept)
			{
				n++;
			}
			s++;
			i++;
		}
		accept++;
		s -= i;
	}
	return (n);
}
