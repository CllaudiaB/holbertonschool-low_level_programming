#include "main.h"

/**
 *puts2 - function that prints every other character of a string, starting
 * with the first character, followed by a new line
 *@str: parameter of the function
 *Return: void
 */

void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');

}
