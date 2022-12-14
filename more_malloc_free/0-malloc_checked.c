#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - function that allocates memory using malloc
 *@b: parameter of the function
 *
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
