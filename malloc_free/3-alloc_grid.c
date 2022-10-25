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
	int i;

	if (width == 0 || height == 0)
		return (NULL);
	p = malloc(height * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		if (p[i] == NULL)
		{

		}

		p[i] = malloc(width * sizeof(int));
	}
	return (p);
}
