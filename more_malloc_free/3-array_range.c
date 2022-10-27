#include "main.h"
#include <stdlib.h>

/**
 *array_range -  function that creates an array of integers
 *@min: value
 *@max: value
 *
 *Return: int
 */

int *array_range(int min, int max)
{
	int *p, res, i;

	if (min > max)
		return (NULL);
	res = max - min + 1;
	p = malloc(sizeof(int) * res);
	for (i = 0; i < res; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
