#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - function that prints the sum of the two diagonals of a square 
 * matrix of integers
 *@a: parameter of the function
 *@size: parameter of the function
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k = 0, n = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		n += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		m += *(a + k);
	}
	printf("%d, %d\n", n ,m);
}
