#include "main.h"
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars, and initializes it
 * with a specific char
 *@size: parameter of the function
 *@c: parameter of tyhe function
 *
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(c) * size);
	if (size == 0)
		return (NULL);
	else if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
