#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *@s: parameter of the function
 *@accept: parameter of the function
 *Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, n = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
					n++;
			}
		}
		else
			return (n);
	}
	return (n);
}
