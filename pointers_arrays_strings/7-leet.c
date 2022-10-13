#include "main.h"

/**
 *leet - function that encodes a string into 1337
 *@s: parameter of the function
 *
 *Return: char
 */

char *leet(char *s)
{
	int i;
	char n[] = {'4', '3', '0', '7', '1'};
	char c[] = {'a', 'e', 'o', 't', 'l'};

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == c[i] || *s == c[i] - 32)
			{
				*s = n[i];
			}
		}
		s++;
	}
	return (s);
}
