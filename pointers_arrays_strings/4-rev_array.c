#include "main.h"

/**
 *reverse_array - function that reverses the content of an array of integers
 *@a: parameter of the function
 *@n: parameter of the function
 *Return : void
 */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = n - 1; i > n / 2; i--)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
