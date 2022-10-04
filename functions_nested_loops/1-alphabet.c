#include "main.h"

/**
 *Description: void print_alphabet(void) - fonction that print alphabet
 *
 *Return: void
 */

print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
}
