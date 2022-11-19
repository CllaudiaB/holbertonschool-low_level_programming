#include "main.h"

/**
 *int flip_bits -  function that returns the number of bits you would
 * need to flip to get from one number to another
 *@n: number
 *@m: number
 *
 *Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned int temp_n, temp_m;

	while (n > 0 || m > 0)
	{
		temp_n = n & 1;
		temp_m = m & 1;

		if (temp_n != temp_m)
			flip++;
		n >>= 1;
		m >>= 1;
	}
	return (flip);
}
