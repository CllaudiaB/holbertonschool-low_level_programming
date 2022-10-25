#include "main.h"
#include <stdlib.h>


/**
 *str_concat - str_concat
 *@s1: parameter of the function
 *@s2: parameter of teh function
 *
 *Return: char
 */

/**
 *_len - foction calculate lenth of a string
 *@s: parameter of the function
 *
 *Return: int
 */



int _len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len1 = 0, len2 = 0, lent = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _len(s1);
	len2 = _len(s2);
	lent = len1 + len2;

	p = malloc(sizeof(char) * lent + 1);
	for (i = 0; i < len1; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = s2[j];
		i++;
	}
	return (p);
}
