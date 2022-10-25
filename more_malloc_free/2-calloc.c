#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmemb: number member
 *@size: size of array
 *
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(nmemb) * size);
	if (p == NULL)
		return (NULL);

	return (p);
}
