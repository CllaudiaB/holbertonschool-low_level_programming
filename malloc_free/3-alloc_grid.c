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

	p = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
	}
	return (p);

	for (i = 0; i < height; i++)
	{
		free(p[i]);
	}
	free(p);
}
