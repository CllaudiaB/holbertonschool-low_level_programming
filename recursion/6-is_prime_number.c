#include "main.h"

/**
 *_prime - function that return if a number is prime
 *@x: parameter of the function
 *@y: parameter of the function
 *
 *Return: int
 */
int _prime(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);
	else if (x == y)
		return (1);
	else if (x > y)
		_prime(x, y + 1);
	return (1);
}

/**
 *is_prime_number -  function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *@n: parameter of the function
 *
 *Return: int
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
