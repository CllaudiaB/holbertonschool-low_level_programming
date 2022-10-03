#include <stdio.h>

/**
 *main - Print alphabet in lowercase and uppercase
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alph_low;
	char alph_upp;

	for (alph_low = 'a'; alph_low <= 'z'; alph_low++)
	{
		putchar(alph_low);
	}
	for (alph_upp = 'A'; alph_upp <= 'Z'; alph_upp++)
	{
		putchar(alph_upp);
	}
	putchar('\n');
	return (0);
}
