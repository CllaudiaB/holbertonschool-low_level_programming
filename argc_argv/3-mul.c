#include <stdio.h>
#include <stdlib.h>

/**
 *main - Main function
 *@argc: argument of main
 *@argv: argument of main
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
	       		mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
