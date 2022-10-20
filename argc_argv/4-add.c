#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - Main function
 *@argc: argument of main
 *@argv: argument of main
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j;
	
	if (argc < 1)
		printf("0\n");
	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
		{
			if (!isdigit(argv[j][i]))
			{
				printf("Error\n");
				return (1);
			}

		 }
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
