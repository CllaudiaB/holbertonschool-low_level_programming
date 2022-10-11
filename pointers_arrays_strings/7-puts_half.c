#include "main.h"

/**
 *puts_half -  function that prints half of a string, followed by a new line
 *@str: parameter of the function
 *
 *Return: void
 */

void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
	{
		len++;
	}


	if (len % 2 == 0)
	{
		n = len / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	else
		if (len % 2 != 0)
		{
			n = (len - 2) / 2;
			while (str[n] != '\0')
			{
				_putchar(str[n]);
				n++;
			}
			_putchar('\n');
		}
}
