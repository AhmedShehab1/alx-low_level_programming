/**
 * _strncat - Concatenates Two Strings
 * for max n bytes from src
 * @dest: String 1
 * @src: String 2
 * @n: Max Bytes Of Src
 *
 * Return: Concatenated String
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	
	while (*dest > 0)
	{
		dest++;
		i++;
	}
	while ((*src > 0) && (n > 0))
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	dest -= i;
	return (dest);
}
