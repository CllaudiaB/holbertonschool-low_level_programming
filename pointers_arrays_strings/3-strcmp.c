#include "main.h"

/**
 *_strcmp - function that compares two strings
 *@s1: parameter of the function
 *@s2: parameter of the function
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	if (len_s1 < len_s2 || len_s2 < len_s1)
		return (-1);
	else if (len_s1 == len_s2)
		return (0);
	else
		return (1);
}
