#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 is success
 */

int main(void)
{
	long int i = 0, j = 1, k, sum = 0;

	for (k = 0; k < 50; k++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%ld", sum);
		if (k != 49)
			printf(", ");
	}
	printf("\n");

	return (0);
}
