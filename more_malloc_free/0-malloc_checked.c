#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc
 *@b: parameter of the function
 *
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b));
	return (p);
	if (p == NULL)
	{
 
	}
}
