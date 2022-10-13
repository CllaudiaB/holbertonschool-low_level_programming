#include "main.h"

/**
 * _memcpy - function that copies memory area
 *@dest: parameter of the function
 *@src: parameter of the function
 *@n: parameter of thr function
 *Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, len = 0;

	while (len < n)
	{
		dest[i] = src[len];
		i++;
		len++;
	}
	return (dest);
}
