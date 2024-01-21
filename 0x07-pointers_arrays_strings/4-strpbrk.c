#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: String To Be Examined
 * @accept: Strings Containing The Required Byte To Be Searched For
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int  Size_s = 0, Size_accept = 0, Counter = 0, i;
	char flag = 0;

	while (s[Size_s] != 0)
	{
		Size_s++;
	}
	while (accept[Size_accept] != 0)
	{
		Size_accept++;
	}
	for (; Counter < Size_s; Counter++)
	{
		for (i = 0; i < Size_accept; i++)
		{
			if (s[Counter] == accept[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	if (flag == 1)
	{
		return (&s[Counter]);
	}
	else
	{
		return (&s[Size_s]);
	}
}
