#include "main.h"

/**
 *_strstr - function that locates a substring
 *@haystack: parameter of the function
 *@needle: parameter of the function
 *Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
