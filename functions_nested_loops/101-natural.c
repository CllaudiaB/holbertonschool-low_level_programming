#include <stdio.h>

/**
 * main - 1024
 *
 *Return: 0 if succes
 */

int main(void)
{
	int i, summ = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			summ += i;
	}
	printf("%d\n", summ);

	return (0);
}
