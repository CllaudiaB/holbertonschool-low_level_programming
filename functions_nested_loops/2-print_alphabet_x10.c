#include "main.h"

/**
 *print_alphabet_x10 - fonction that print 10 times alphabet
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alph;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
