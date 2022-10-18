#include "main.h"

/**
 *_sqrt -  function that return square
 *@x: parameter of the function
 *@y: parameter of the function
 *
 *Return: int
 */

int _sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (_sqrt(x + 1, y));
}


/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 *@n: parameter of the function
 *
 *Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
