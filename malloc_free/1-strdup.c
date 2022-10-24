#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a paramete
 *@str: parameter of function
 *
 *Return: char
 */

char *_strdup(char *str)
{
	char *p;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	p = malloc(len + 1);

	for (i = 0; i < len; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = str[i];
	}
	return (p);
}
