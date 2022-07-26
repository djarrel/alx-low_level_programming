#include "main.h"
/**
 * alloc_grid - two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **d;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	d = malloc(sizeof(int *) * height);
	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		d[i] = malloc(sizeof(int) * width);
		if (d[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(d[i]);
			}
			free(d);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			d[i][j] = 0;
		}
	}
	return (d);
}
