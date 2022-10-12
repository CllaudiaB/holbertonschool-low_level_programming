#include "main.h"

/**
 *_strcmp - function that compares two strings
 *@s1: parameter of the function
 *@s2: parameter of the function
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, n = 0;

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	n = len_s1 - len_s2;
	return (n);
}
