#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: parameter of the function
 *@c: parameter of the function
 *Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

        while (*s != '\0')
	{
		s++;
		if (s[i] == c )
			return (s + i);
	}
	    return (0);
}
