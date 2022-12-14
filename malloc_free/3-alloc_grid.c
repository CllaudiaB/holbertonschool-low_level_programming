#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to a 2
 *dimensional array of integers
 *@width: parameter of thr function
 *@height: parameter of the function
 *
 *Return: int
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
