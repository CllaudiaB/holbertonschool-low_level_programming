#include <stdlib.h>
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
	int i, sum = 0;

	if (argc < 1)
		printf("0\n");
	else
		for (i = 1; i < argc; i++)
		{
	       		sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
}
