#include "main.h"

/**
 *puts2 - function that prints every other character of a string, starting
 * with the first character, followed by a new line
 *@str: parameter of the function
 *Return: void
 */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len += 2;
	}
	_putchar('\n');
}
