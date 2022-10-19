#include <stdio.h>

/**
 *main - Main function
 *@argc: argument of main
 *@argv: argument of main
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
