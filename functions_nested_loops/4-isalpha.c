#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: parameter of the fonction
 *
 *Return: 1 if letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
		return (1);
	else
		return (0);
}
