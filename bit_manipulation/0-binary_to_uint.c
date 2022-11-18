#include "main.h"

/**
 *binary_to_uint -  function that converts a binary number to an unsigned int
 *@b: pointer to string
 *
 *Return: the converted number, or 0 if
 *there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, mult = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal += (b[i] - '0') * mult;
		mult *= 2;
	}
	return (decimal);
}
