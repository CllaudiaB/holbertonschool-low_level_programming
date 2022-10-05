#include "main.h"

/**
 *print_last_digit - function that print the last digit of a number
 *@n: parameter of the function
 *
 *Return: value of the last digit
 */

int print_last_digit(int n)
{
	int digit;
	if (n > 0)
	{
		digit = n % 10;
		_putchar(digit);
	}
	else if (n == 0)
	{
		digit = 0;
		_putchar(digit);
	}
	else
	{
		digit = n % 10 * (-1);
		_putchar(digit);
	}
	return (digit);
}
