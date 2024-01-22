#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates Two Strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer To Concatenated String 
 * (Newly Allocated Memory) OR NULL If It Fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t Size_s1 = 0, Size_s2 = 0, index = 0, Copy, flag1 = 0, flag2 = 0;
	char *Conc_String;

	while (s1[Size_s1] > 0)
	{
		Size_s1++;
	}
	Copy = 	Size_s1;
	while (s2[Size_s2] > NULL)
	{
		Size_s2++;
	}
	if (Size_s2 > n)
	{
		Conc_String = malloc(n + Size_s1 + 1);
	}
	else
	{
		Conc_String = malloc(Size_s2 + Size_s1 + 1);
	}
	if (Conc_String == NULL)
	{
		return (NULL);
	}
	for (; index < 2; index++)
	{
		if (index == 0)
		{
			for (; index < Size_s1; index++)
			{
				Conc_String[index] = s1[index]; 
			}
			index = 0;
		}
		if ((index == 1) && (Size_s2 > n))
		{
			for (index = 0; index < n; index++)
			{
				Conc_String[Copy] = s2[index];
				Copy++;
			}
			index = 1;
			flag1 = 1;
		}
		else if ((index == 1) && (Size_s2 <= n))
		{
			for (index = 0; index < Size_s2; index++)
			{
				Conc_String[Copy] = s2[index];
				Copy++;
			}
			index = 1;
			flag2 = 1;
		}
	}
	if (flag1 == 1)
	{
		Conc_String[n + Size_s1] = '\0';
	}
	if (flag2 == 1)
	{
		Conc_String[Size_s2 + Size_s1] = '\0';
	}
	return (Conc_String);
}