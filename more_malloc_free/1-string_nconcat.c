#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat -  function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: n bytes
 *
 *Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, lent, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] < '\0')
		len2++;
	lent = len1 + len2;

	p = malloc(sizeof(char) * lent + 1);
	for (i = 0; i < len1; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = s2[j];
		i++;
	}
	return (p);
}
