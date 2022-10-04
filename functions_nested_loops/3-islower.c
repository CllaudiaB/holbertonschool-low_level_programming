#include "main.h"

/**
 *_islower - fonction that checks for lowercase character
 *@c: parameter of the function
 *
 *Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
