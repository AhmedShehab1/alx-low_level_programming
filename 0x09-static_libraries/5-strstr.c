#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: String To Be Searched In For Substring needle
 * @needle: Substring To Be Searched For In haystach String
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int SubString_Occured = 0, Counter_Substring = 0;

	while (*needle++ > 0)
	{
		Counter_Substring++;
	}
	needle -= (Counter_Substring + 1);
	while (*haystack > 0)
	{
		if (*haystack == *needle)
		{
			int i = 0;

			for (; i < Counter_Substring; i++)
			{
				if (*++haystack == *++needle)
				{
					SubString_Occured++;
				}
				else
				{
					break;
				}
			}
		}
	haystack++;
	}
	if (SubString_Occured == Counter_Substring)
	{
		needle -= Counter_Substring;
	}
	else
	{
		return (haystack);
	}
	return (needle);
}
