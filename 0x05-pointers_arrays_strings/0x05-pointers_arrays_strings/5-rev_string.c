#include "main.h"

/**
 * rev_string - Reverts A Passed String
 * @s: String To Be Reverted
*/
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp[50];

	while (s[i] > 0)
	{
		i++;
	}
	j = i;
	for (i = 0; i < j; i++)
	{
		temp[i] = s[i];
	}
	i--;
	j = 0;
	while (s[j] > 0)
	{
		s[j] = temp[i];
		i--;
		j++;
	}
}
