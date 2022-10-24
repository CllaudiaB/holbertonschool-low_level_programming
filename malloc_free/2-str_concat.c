#include "main.h"
#include <stdlib.h>

/**
 *str_concat - str_concat
 *@s1: parameter of the function
 *@s2: parameter of teh function
 *
 *Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;

	p = malloc(sizeof(s1) + sizeof(s2) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1 == NULL)
			return NULL;
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (s2 == NULL)
			return (NULL);
		p[i] = s2[j];
		i++;
	}
	return (p);
}
