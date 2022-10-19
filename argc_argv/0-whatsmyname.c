#include <stdio.h>

/**
 *main -  Main function
 *@argc: argument of main
 *@argv: argument of main
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
