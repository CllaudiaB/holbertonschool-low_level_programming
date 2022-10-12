#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *@dest: parameter of the function
 *@src: parameter of the function
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0, i;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	while (src[len_src] != '\0')
	{
		len_src++;
	}

	for (i = len_dest - 1; i <= src[len_src]; i++)
	{
		dest[len_dest] = src[len_src];
	}
	return (dest);
}
