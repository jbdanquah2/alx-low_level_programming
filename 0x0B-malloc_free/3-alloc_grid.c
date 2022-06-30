#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	res = malloc(height * sizeof(int *));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		res[i] = malloc(width * sizeof(int));
		if (res[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(res[i]);
			free(res);
		return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			res[i][j] = 0;

	return (res);
}
