#include "main.h"

/**
 *_strcpy -  function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: parameter of the function
 *@src: parameter of the function
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
