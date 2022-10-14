#include "main.h"

/**
 *_strpbrk -function that searches a string for any of a set of bytes
 *@s: parameter of the function
 *@accept: parameter of the function
 *Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
