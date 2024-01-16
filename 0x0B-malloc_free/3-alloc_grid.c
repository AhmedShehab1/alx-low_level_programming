#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2-Dimensional Array
 * @width: width of Array
 * @height: Height Of Array
 * Return: Pointer To 2-Dimensional Array Pointer
 * OR 0 if width & height are zero or negative
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	matrix = (int **)malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
